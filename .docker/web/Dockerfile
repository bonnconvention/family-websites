FROM php:apache
MAINTAINER cristian@romanescu.ro

RUN apt-get update && apt-get install -yq \
    libfreetype6-dev \
    libjpeg62-turbo-dev \
    libmcrypt-dev \
    libpng12-dev \
    libicu-dev

RUN docker-php-ext-install gd json intl pdo pdo_mysql mbstring