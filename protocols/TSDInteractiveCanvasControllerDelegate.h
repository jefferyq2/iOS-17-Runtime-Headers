
@protocol TSDInteractiveCanvasControllerDelegate <TSKChangeSourceObserver, TSKDocumentRootProvider>

@required

- (TSKDocumentRoot *)documentRoot;

@optional

- (<TSCEResolverContainer> *)activeResolverContainer;
- (NSArray *)additionalGestureTargetsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 gesture:(id <TSDGesture>)arg2;
- (bool)allowEditMenuToAppear;
- (bool)allowSelectionPopoverForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (bool)allowTextEditingToBegin;
- (bool)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (double)autoZoomAnimationDurationForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGSize { double x1; double x2; })canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)canvasEditorDidChangeSelection:(id <TSDEditor>)arg1;
- (Class)canvasViewClassOverride;
- (double)canvasViewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)canvasWillEndEditingToBeginEditingRep:(TSDRep *)arg1;
- (NSString *)descriptionForCanvasViewScale:(double)arg1;
- (bool)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dynamicOperationDidEnd;
- (void)dynamicOperationWillBegin;
- (TSDEditorController *)editorControllerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (void)editorDidChangeSelection:(id <TSDEditor>)arg1;
- (void)editorDidChangeSelectionWithTextInputEditor:(id <TSDEditor>)arg1 changingEditor:(id <TSDEditor>)arg2;
- (<TSDImageReplacer> *)imageReplacerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (bool)inPrintPreviewMode;
- (double)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 adjustViewScale:(double)arg2;
- (bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsEditMenuForRep:(TSDRep *)arg2;
- (bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsHyperlinkWithGesture:(id <TSDGesture>)arg2 forRep:(TSDRep *)arg3;
- (bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsSmartMagnifyForRep:(TSDRep *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewBoundsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewShouldBecomeFirstResponder:(TSDCanvasView *)arg2;
- (struct CGPoint { double x1; double x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint { double x1; double x2; })arg2 forViewScale:(double)arg3;
- (struct CGPoint { double x1; double x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint { double x1; double x2; })arg2 forViewScale:(double)arg3 scrollViewBoundsSize:(struct CGSize { double x1; double x2; })arg4;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forLayout:(TSDLayout *)arg3;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forRep:(TSDRep *)arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 didScrollForAutoscroll:(TSDAutoscroll *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForHitTesting:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForScrollViewHitTesting:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForClippingReps:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForTiling:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (NSArray *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 gestureTargetStackWhenScrollingWithGesture:(id <TSDGesture>)arg2;
- (long long)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 imageReplaceBadgeBehaviorForRep:(TSDRep *)arg2;
- (NSObject<TSDInfo> *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 infoForModel:(NSObject<TSKModel> *)arg2 withSelection:(TSKSelection *)arg3;
- (<TSDLayoutGeometryProvider> *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutGeometryProviderForLayout:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutRegistered:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutUnregistered:(TSDLayout *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 outsetSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)interactiveCanvasController:(void *)arg1 performLockedAction:(void *)arg2; // needs 2 arg types, found 6: TSDInteractiveCanvasController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<TSDGestureTarget> *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 primaryTargetForGesture:(id <TSDGesture>)arg2;
- (struct CGPoint { double x1; double x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 restrictedContentOffset:(struct CGPoint { double x1; double x2; })arg2 forViewScale:(double)arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillBeginDragging:(TSKScrollView *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillEndDragging:(TSKScrollView *)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (bool)interactiveCanvasController:(void *)arg1 shouldDispatchBackgroundWork:(void *)arg2; // needs 2 arg types, found 6: TSDInteractiveCanvasController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 shouldTakeFirstResponderForTextEditor:(id <TSDTextInput>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 targetRectForInfo:(NSObject<TSDInfo> *)arg2 withSelection:(TSKSelection *)arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 updateGestureTargetStack:(NSMutableArray *)arg2 gesture:(id <TSDGesture>)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 visibleBoundsWithClippingLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 canvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateScrollToVisibleUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateToViewScale:(double)arg2 withDuration:(double)arg3 unscaledContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willLayoutRep:(TSDRep *)arg2;
- (void)interactiveCanvasControllerDidAnimateViewScale:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidEndScrollingAnimation:(TSDInteractiveCanvasController *)arg1 stillAnimating:(bool)arg2;
- (void)interactiveCanvasControllerDidLayout:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidStopScrolling:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidUpdateLayersFromReps:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidValidateLayouts:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidZoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidZoomWithUserGesture:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerIsZooming:(TSDInteractiveCanvasController *)arg1 viewScale:(double)arg2;
- (bool)interactiveCanvasControllerShouldAnimateToSearchReferences:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerShouldDeferViewCreation:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerShouldEndEditingWhenLosingFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerShouldMaintainPositionOnSetViewScale:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerShouldResampleImages:(TSDInteractiveCanvasController *)arg1;
- (bool)interactiveCanvasControllerShouldUseGuidedPan:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint { double x1; double x2; })arg2;
- (bool)interactiveCanvasControllerSupportsAutozoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillBecomeFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillLayout:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillZoom:(TSDInteractiveCanvasController *)arg1;
- (bool)isCanvasInteractive;
- (bool)isInteractiveCanvasControllerTextOnly:(TSDInteractiveCanvasController *)arg1;
- (bool)isPopoverGestureInFlight;
- (bool)isPrintingCanvas;
- (double)nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(bool)arg2;
- (<TSDPanGuide> *)panGuideForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)rectanglesObscuringView:(UIView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewClippingBoundsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (void)selectionDidChange;
- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(unsigned long long)arg3;
- (bool)shouldClipToScrollViewBoundsInVisibleBounds;
- (bool)shouldIgnoreTextGestures;
- (bool)shouldPopKnobsOutsideEnclosingScrollView;
- (bool)shouldResizeCanvasToScrollView;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowTextOverflowGlyphs;
- (bool)shouldSuppressCommentKnobsForRep:(TSDRep *)arg1;
- (struct CGSize { double x1; double x2; })sizeOfScrollViewEnclosingCanvas;
- (bool)spellCheckingSupported;
- (bool)spellCheckingSuppressed;
- (bool)tappedCanvasBackgroundAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
- (UIView *)visibleBoundsClipViewForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledCanvasRectWithoutKeyboard;
- (void)willScrollSearchReferenceToVisible:(id <TSKSearchReference>)arg1;
- (Class)wpEditorClassOverride;
- (Class)wpFloatingCommentEditorClassOverride;
- (Class)wpTrackerClassOverride;
- (bool)zoomOnSelectionChange:(TSDInteractiveCanvasController *)arg1;

@end