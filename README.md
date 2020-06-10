# Automation_Test_VBNET_serial_C
Plataforma para automação de testes funcionais de equipamentos para Telecom (Anatel).
O sistema é composto por uma interface baseada em VB.Net (frontend) que comunica com um hardware (arduino) através da comunicação serial, que por sua vez comunica com instrumentos de bancada. O hardware possui um frmware baseado em linguagem C++ (backend) que ao receber comandos da interface frontend, habilita funções e passa parametros de configuração aos equipamentos conectados.
Com o uso da ferramenta, o Tester não só tem a opção de parametrizar os equipamentos (test setup), mas também tem opção de executar os testes de forma automatizada.
