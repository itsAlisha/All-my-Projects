import java.sql.*;
import ConnectionProvider.*;
import javax.swing.JOptionPane;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

/**
 *
 * @author Dell
 */
public class reportcard extends javax.swing.JFrame {

    /**
     * Creates new form reportcard
     */
    public reportcard() {
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

        jScrollPane1 = new javax.swing.JScrollPane();
        text = new javax.swing.JTextPane();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        rno = new javax.swing.JTextField();
        nm = new javax.swing.JTextField();
        clss = new javax.swing.JTextField();
        phy = new javax.swing.JTextField();
        chem = new javax.swing.JTextField();
        maths = new javax.swing.JTextField();
        id = new javax.swing.JTextField();
        jButton1 = new javax.swing.JButton();
        jLabel10 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jScrollPane1.setViewportView(text);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(326, 0, 290, 473));

        jLabel1.setFont(new java.awt.Font("Comic Sans MS", 1, 24)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(0, 0, 153));
        jLabel1.setText("MARKS :");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 220, 120, 30));

        jLabel2.setFont(new java.awt.Font("Comic Sans MS", 1, 24)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(0, 0, 153));
        jLabel2.setText("REPORT");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 10, -1, -1));

        jLabel3.setText("ID :");
        getContentPane().add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 60, -1, -1));

        jLabel4.setText("ROLL NO :");
        getContentPane().add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 90, -1, -1));

        jLabel5.setText("NAME : ");
        getContentPane().add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 120, -1, -1));

        jLabel6.setText("CLASS :");
        getContentPane().add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 150, -1, -1));

        jLabel7.setText("Physics");
        getContentPane().add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 280, -1, -1));

        jLabel8.setText("Chemistry");
        getContentPane().add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 320, -1, -1));

        jLabel9.setText("Maths");
        getContentPane().add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 360, -1, -1));

        rno.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                rnoActionPerformed(evt);
            }
        });
        getContentPane().add(rno, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 90, 140, -1));
        getContentPane().add(nm, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 120, 140, -1));

        clss.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                clssActionPerformed(evt);
            }
        });
        getContentPane().add(clss, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 150, 140, -1));

        phy.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                phyActionPerformed(evt);
            }
        });
        getContentPane().add(phy, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 280, 140, -1));

        chem.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                chemActionPerformed(evt);
            }
        });
        getContentPane().add(chem, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 320, 140, -1));

        maths.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mathsActionPerformed(evt);
            }
        });
        getContentPane().add(maths, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 360, 140, -1));
        getContentPane().add(id, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 60, 140, -1));

        jButton1.setText("Submit");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 410, -1, -1));

        jLabel10.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        jLabel10.setText("BACK");
        jLabel10.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel10MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel10, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 10, -1, -1));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void rnoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_rnoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_rnoActionPerformed

    private void clssActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_clssActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_clssActionPerformed

    private void phyActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_phyActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_phyActionPerformed

    private void chemActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_chemActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_chemActionPerformed

    private void mathsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mathsActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_mathsActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        try{
            Connection conn=ConnectionProvider.getConnection();
            String sql="insert into reportcard values(?,?,?,?,?,?,?,?)";
            String p=phy.getText();
            double s1=Double.parseDouble(p);
            String c=chem.getText();
            double s2=Double.parseDouble(c);
            String m=maths.getText();
            double s3=Double.parseDouble(m);
                    
                    double total=((s1+s2+s3)*100)/300;
                    String grade;
                    if (total>=80){
                        grade="A+";
                    }
                    else if (total>=70 && total<80){
                        grade="A";
                    }
                    else if (total>=60 && total<70){
                        grade="B";
                    }
                    else if (total>=50 && total<60){
                        grade="C";
                    }
                    else if (total>=40 && total<50){
                        grade="D";
                    }
                    else{
                        grade="Fail";
                    }
                    
                    String n=nm.getText();
                    String r=rno.getText();
                    String cla=clss.getText();
                    String ph=phy.getText();
                    String ch=chem.getText();
                    String math=maths.getText();
                    System.out.println("hey"+cla+"hi");
                    PreparedStatement ptst=conn.prepareStatement(sql);
                    ptst.setString(1,id.getText());
                    ptst.setString(2,n);
                    ptst.setString(3,r);
                    ptst.setString(4,cla.trim());
                    ptst.setString(5,ph);
                    ptst.setString(6,ch);   
                    ptst.setString(7,math);
                    ptst.setString(8,grade);

                 
                 ptst.executeUpdate();
                 JOptionPane.showMessageDialog(null,"Data saved successfully");
                 text.setText("REPORTCARD\n\n Student Name : "+n+"\nClass : "+cla+"\n\n----------------------------\nMarks\nPhysics:"+ph+"\nChemistry"+ch+"\nMaths:"+math+"\nGRADE : "+grade);               
        }
            catch(Exception e)
            {
                    JOptionPane.showMessageDialog(null,e);
            }
    
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jLabel10MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel10MouseClicked
        welcome obj=new welcome();
        obj.setVisible(true);
        dispose();
    }//GEN-LAST:event_jLabel10MouseClicked

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
            java.util.logging.Logger.getLogger(reportcard.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(reportcard.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(reportcard.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(reportcard.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new reportcard().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField chem;
    private javax.swing.JTextField clss;
    private javax.swing.JTextField id;
    private javax.swing.JButton jButton1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField maths;
    private javax.swing.JTextField nm;
    private javax.swing.JTextField phy;
    private javax.swing.JTextField rno;
    private javax.swing.JTextPane text;
    // End of variables declaration//GEN-END:variables
}
