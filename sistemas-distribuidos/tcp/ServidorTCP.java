
package servidortcp;

import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class ServidorTCP {
    
    public static void main(String[] args) throws UnknownHostException, IOException { 
        
        Scanner input = new java.util.Scanner(System.in);
        server server;
        
        try{
            server = new server(1234);
        } catch (UnknownHostException uhex){
            System.out.println(uhex.getMessage());
        }
        
    }
}
