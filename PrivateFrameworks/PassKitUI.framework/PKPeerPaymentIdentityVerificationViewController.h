
@interface PKPeerPaymentIdentityVerificationViewController : PKPaymentSetupFieldsViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController * _controller;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    unsigned long long  _identityVerificaionError;
    NSArray * _visibleFieldIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *headerSubtitle;
@property (nonatomic, retain) NSString *headerTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_showNavigationBarSpinner:(bool)arg1;
- (void)_terminateFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 visibleFieldIdentifiers:(id)arg3;
- (id)initWithController:(id)arg1 visibleFieldIdentifiers:(id)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (id)visibleFieldIdentifiers;

@end