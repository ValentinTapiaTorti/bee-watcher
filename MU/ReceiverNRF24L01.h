#ifndef RECEIVER_NRF24L01_H
#define RECEIVER_NRF24L01_H

/** void seturReceiverNRF24L01()
 * This functino begins the radio SPI communication, set the channel
 * and start the listening.
 */
void seturReceiverNRF24L01();

/** void receiveData()
 * This functin what until it receive the data struct or a specific 
 * timeout has been over.
 */
void receiveData();

#endif
