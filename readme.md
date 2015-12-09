# CMS Family websites


## Setup the development environment

On the development environment you need to have already installed:

1. Apache 2.2 or 2.4
2. PHP 5.5.x or 5.6.x: for CentOS packages: php55w php55w-cli php55w-common php55w-gd php55w-intl php55w-ldap php55w-mbstring php55w-mcrypt php55w-mysql php55w-opcache php55w-pdo php55w-pear php55w-pecl-imagick php55w-pecl-memcached php55w-xml
3. MySQL 5.5 or MariaDB
4. [Composer](https://getcomposer.org/download/) - required by Drush
5. Development tools like git, gzip etc.
6. Clone of this repository in ``~/Work/cms``


### Step 1. Install Drush

Clone the drush repository to install latest Drush. The projects needs at least Drush 7.x

``
sudo git clone https://www.github.com/drush-ops/drush /opt/drush
cd /opt/drush/ && sudo composer install
sudo ln -s /opt/drush/drush /usr/bin/drush
``

Then copy the drush configuration file to your drush home:

``cp ~/Work/cms/conf/drushrc.php ~/.drush/``

When you finish the installation you will have the latest drush installed, and in shell PATH.


Create the file ``~/Work/cms/drush/aliases/aliases.local.php`` and add the following content:

``
<?php

$aliases['prod']['remote-user'] = '-- hidden --';
$aliases['prod']['root'] = '-- hidden --';
``

*Note: For security reasons the values hidden and provided upon request.* 

When you finish, test the installation by going to ``~/Work/cms/docroot`` and run ``drush sa``. The output should be something like:

``  
@none
@prod
@self
``
Then you can test the @prod alias with: ``drush @prod st`` which will SSH into machine and retrieve the status.


Drush is relying on SSH to access the remote server, therefore is a good idea to configure passwordless SSH. On Linux this is done by editing ``~/.ssh/config`` and setting up the configuration for the server. For example:

``
Host cms.int
  User john
	IdentityFile ~/.ssh/id_rsa_cms
``

### Step 2. Configure PHP

Edit php.ini and add make the following changes:

``
max_input_vars=20000
date.timezone = 'Europe/Berlin'
``

### Step 2. Create the SQL database

Edit ``/etc/my.cnf`` and set ``max_allowed_packet=1024M``, then restart mysql

``
CREATE DATABASE cms;
GRANT ALL ON cms.* TO cms@'localhost' IDENTIFIED BY 'cms';
``

### Step 3. Configure Apache

Copy the provided Apache configuration file in your Apache configuration directory. For instance:

``cp ~/Work/cms/conf/apache.template.conf /etc/httpd/conf.d/cms.conf``

Edit the new file so the patchs are matching your local paths, then restart apache

*Note: On some platforms like CentOS, due to security constraints, you need to make _apache_ user member of your group, disable or configure SELinux etc.*


### Step 4. Synchronize the database & files with the production instance

1. To synchronise the database: ``drush sql-sync @prod @self``
2. To synchronise the files: ``drush rsync @prod:%files @self:%files``

Other useful commands

* ``drush devify -y`` - This will set all passwords to ``password``, randomize emails, disables some caching, JS/CSS optimizations - Use for local development.
