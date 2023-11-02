
@interface TSCellularPlanLabelPickerTableViewController : SSUITableViewController <UITextFieldDelegate> {
    CTCellularPlanItem * _associatedPlanItem;
    NSIndexPath * _chosenLabelIndexPath;
    CTUserLabel * _customLabel;
    CTUserLabel * _initialLabel;
    NSArray * _predefinedUserLabels;
}

@property (retain) CTCellularPlanItem *associatedPlanItem;
@property (readonly) CTUserLabel *chosenLabel;
@property (retain) NSIndexPath *chosenLabelIndexPath;
@property (retain) CTUserLabel *customLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CTUserLabel *initialLabel;
@property (retain) NSArray *predefinedUserLabels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (id)associatedPlanItem;
- (id)chosenLabel;
- (id)chosenLabelIndexPath;
- (id)customLabel;
- (id)customLabelIndexPath;
- (id)customLabelRowValue;
- (id)init;
- (id)initialLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)predefinedUserLabels;
- (void)setAssociatedPlanItem:(id)arg1;
- (void)setChosenLabelIndexPath:(id)arg1;
- (void)setCustomLabel:(id)arg1;
- (void)setInitialLabel:(id)arg1;
- (void)setPredefinedUserLabels:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end