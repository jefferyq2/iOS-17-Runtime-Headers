
@protocol CBPairingAgentDelegate <NSObject>

@optional

- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidCompletePairing:(CBPeer *)arg2;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidFailToCompletePairing:(CBPeer *)arg2 error:(NSError *)arg3;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidRequestPairing:(CBPeer *)arg2 type:(long long)arg3 passkey:(NSNumber *)arg4;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidUnpair:(CBPeer *)arg2;

@end