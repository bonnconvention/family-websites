(function($) {
  google.charts.load("current", {packages:["corechart"]});
  $.fn.drawChartQuestionnaire = function(data) {
    console.log(data);
    if (data.length > 0) {
      var chart = new google.visualization.PieChart(document.getElementById('respondents-chart'));
      var options = {};
      chart.draw(google.visualization.arrayToDataTable(data), options);
    }
  }
}) (jQuery);