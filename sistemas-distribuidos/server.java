/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package servidortcp;
import com.sun.org.apache.xml.internal.utils.NameSpace;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import javax.swing.ImageIcon;

public class server {
   
    ServerSocket SS;
    Socket S; 
    OutputStream OS;
    InputStream IS;
    byte[] b;
    byte[] b2;
    String pathImage;
     
    String [] imagens = new String[1];
   
    
    public server(int porta) throws IOException{
        
        imagens[0]="pintinho";
        
        try{
            b = new byte [100000];
            SS = new ServerSocket(porta);
            S = SS.accept();
            IS = S.getInputStream();
            IS.read(b);
            String str = new String(b);
            b2 = search(str);
            OS = S.getOutputStream();
            OS.write(b2);
            
        }catch(IOException ioex){
            System.out.println(ioex.getMessage());
        }
        
    }
   
    public byte [] search (String nameImage)throws IOException{
        
        for (int i=0; i<imagens.length;i++){
//            
            if (imagens[i].compareTo(nameImage.trim())==0){
                pathImage = "C:\\Users\\acer\\Pictures\\teste\\"+imagens[i]+".jpg";
            } else {
//                print image of error.
                pathImage = "C:\\Users\\acer\\Pictures\\teste\\error-image-generic.png";
            }
        }
        
        File file = new File(pathImage);
        byte [] b3 = Files.readAllBytes(file.toPath());
        
        return b3;
    }
}
