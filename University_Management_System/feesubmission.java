import javax.swing.JOptionPane;
import ConnectionProvider.*; 
import java.sql.*;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

/**
 *
 * @author Dell
 */
public class feesubmission extends javax.swing.JFrame {

    /**
     * Creates new form feesubmission
     */
    public feesubmission() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        af = new javax.swing.JTextField();
        mc = new javax.swing.JTextField();
        hf = new javax.swing.JTextField();
        tf = new javax.swing.JTextField();
        sn = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        jButton1 = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        text = new javax.swing.JTextPane();
        jLabel8 = new javax.swing.JLabel();
        mn = new javax.swing.JTextField();
        jLabel9 = new javax.swing.JLabel();
        id = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Comic Sans MS", 1, 24)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(0, 0, 102));
        jLabel1.setText("FEE Counter");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(81, 34, -1, -1));

        jLabel2.setText("Student Name :");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 130, -1, -1));

        jLabel3.setText("Annual Fee :");
        getContentPane().add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 220, -1, -1));

        jLabel4.setText("Mess Charges :");
        getContentPane().add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 270, -1, -1));

        jLabel5.setText("Hostel Fee :");
        getContentPane().add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 310, -1, -1));

        jLabel6.setText("Tuition Fee :");
        getContentPane().add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 360, -1, -1));

        af.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                afActionPerformed(evt);
            }
        });
        getContentPane().add(af, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 220, 160, -1));
        getContentPane().add(mc, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 270, 160, -1));

        hf.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                hfActionPerformed(evt);
            }
        });
        getContentPane().add(hf, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 310, 160, -1));
        getContentPane().add(tf, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 360, 160, -1));

        sn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                snActionPerformed(evt);
            }
        });
        getContentPane().add(sn, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 130, 160, -1));

        jLabel7.setText("BACK");
        jLabel7.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel7MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 10, -1, -1));

        jButton1.setText("PAY");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 410, -1, -1));

        jScrollPane1.setViewportView(text);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(340, 0, 270, 510));

        jLabel8.setText("Month Name :");
        getContentPane().add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 170, -1, -1));
        getContentPane().add(mn, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 170, 160, -1));

        jLabel9.setText("id :");
        getContentPane().add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 90, -1, -1));
        getContentPane().add(id, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 90, 160, -1));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void afActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_afActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_afActionPerformed

    private void hfActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_hfActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_hfActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        String mon=mn.getText();
        String annual=af.getText();
        double a=Double.parseDouble(annual);
        String messch=mc.getText();
        double b=Double.parseDouble(messch);
        String hostel=hf.getText();
        double c=Double.parseDouble(hostel);
        String tuition=tf.getText();
        double d=Double.parseDouble(tuition);
        
        double total=a+b+c+d;
        double rem=total-18000;
        String status;
        if(rem==0){
            status="paid";
        }
        else{
            status="unpaid";
        }
        
        text.setText("University Management System\n\n"
        +"\nTotal Fee to be paid : 18000\n ******************************\n Paid Fee \n\n\n"
        +"Annual Fee : "+annual+"\nMess charges : "+messch+"\nHostel Fee : "+hostel+"\nTuition Fee : "+tuition+
        "\nTotal Fee paid : "+total+"\n Remaining : "+rem);        
        try{
        Connection conn=ConnectionProvider.getConnection();
        String sql="insert into feesubmit values(?,?,?,?,?,?,?,?)";
        PreparedStatement ptst=conn.prepareStatement(sql);
        
        ptst.setString(1,id.getText());
        ptst.setString(2,sn.getText());
        ptst.setString(3,mn.getText());
        ptst.setString(4,annual);
        ptst.setString(5,messch);
        ptst.setString(6,hostel);
        ptst.setString(7,tuition);
        ptst.setString(8,status);
        ptst.executeUpdate();
        JOptionPane.showMessageDialog(null,"Data stored successfully");
        conn.close();
        }
        catch(Exception e){
        JOptionPane.showMessageDialog(null,e);
    }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void snActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_snActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_snActionPerformed

    private void jLabel7MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel7MouseClicked
        welcome obj=new welcome();
        obj.setVisible(true);
        dispose();
    }//GEN-LAST:event_jLabel7MouseClicked

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(feesubmission.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(feesubmission.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(feesubmission.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(feesubmission.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new feesubmission().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField af;
    private javax.swing.JTextField hf;
    private javax.swing.JTextField id;
    private javax.swing.JButton jButton1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField mc;
    private javax.swing.JTextField mn;
    private javax.swing.JTextField sn;
    private javax.swing.JTextPane text;
    private javax.swing.JTextField tf;
    // End of variables declaration//GEN-END:variables
}
