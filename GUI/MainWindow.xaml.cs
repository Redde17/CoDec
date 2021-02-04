using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using wrp;

namespace GUI{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window{
        public MainWindow(){
            InitializeComponent();
            //MessageBox.Show("Yay e' arrivata la versione 1.0.1\nE' stato risolto un bug che non permetteva la corretta visualizazzione dell parola cifrata\nFine ;)", "YEEEEEEEEEEAH");
        }


        private void SendBtn_Click(object sender, RoutedEventArgs e){

            using (var WrpObject = new wrapper()){
                WrpObject.WRPinputParola(InputBox.Text);
        
                OutputBox.Text = WrpObject.WRPgetParola();

                WrpObject.genKey();
                OutputKeyBox.Text = WrpObject.WRPgetKey();

                WrpObject.codifica();
                OutputCodedBox.Text = WrpObject.WRPgetCodedParola();

                WrpObject.decodifica();
                OutputDecodedBox.Text = WrpObject.WRPgetDecodedParola();
            }
        }
    }
}

//using (var TestObject = new wrapper())
