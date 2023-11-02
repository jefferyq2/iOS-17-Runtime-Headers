
@interface HKEmergencyCardBloodTypeTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    _HKMedicalIDMultilineStringCell * _displayCell;
    HKMedicalIDEditorPickerCell * _editableCell;
    bool  _isEditing;
}

- (void).cxx_destruct;
- (id)_createEditableCell;
- (bool)canEditRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;

@end