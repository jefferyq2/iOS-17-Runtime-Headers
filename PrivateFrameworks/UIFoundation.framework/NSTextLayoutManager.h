
@interface NSTextLayoutManager : NSObject <NSSecureCoding, NSTextSelectionDataSource, NSTextViewportElementProvider> {
    struct { id x1; id x2; double x3; long long x4; long long x5; bool x6; bool x7; bool x8; } * _activeEnumerationCache;
    bool  _allowsFontSubstitutionAffectingVerticalMetrics;
    long long  _applicationFrameworkContext;
    bool  _breaksLinesForInteractiveText;
    NSLayoutManager * _companion;
    <NSTextLayoutManagerDelegatePrivate> * _delegate;
    bool  _delegateWithSimpleTextContainerQuery;
    bool  _delegateWithTextContainerQuery;
    bool  _delegateWithTextSelectionNotification;
    bool  _isProcessingRenderingAttributesMethod;
    id /* block */  _isSelectionOverridableColor;
    struct { 
        NSTextContainer *textContainer; 
        <NSTextLocation> *startLocation; 
        NSTextRange *textRange; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } usageBounds; 
        unsigned long long entryIndex; 
        bool containerFilled; 
        bool anchoredLocation; 
    }  _lastTextContainerEntry;
    NSOperationQueue * _layoutQueue;
    bool  _limitsLayoutForSuspiciousContents;
    long long  _maximumNumberOfCachedTextLayoutFragments;
    id /* block */  _renderingAttributesValidator;
    bool  _rendersBackgroundColorAttribute;
    bool  _requiresCTLineRef;
    <NSTextLocation> * _softInvalidationLocation;
    NSTextContainer * _templateTextContainer;
    _NSTextAttributeStorage * _temporaryAttributesTable;
    struct { id x1; id x2; id x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned long long x5; bool x6; bool x7; } * _textContainerEntries;
    struct { id x1; id x2; id x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned long long x5; bool x6; bool x7; } * _textContainerEntriesAccessHint;
    unsigned long long  _textContainerEntriesCount;
    unsigned long long  _textContainerEntriesSize;
    NSArray * _textContainers;
    NSTextContentManager * _textContentManager;
    _NSTextLayoutFragmentStorage * _textLayoutFragmentStorage;
    NSMapTable * _textLayoutFragmentTable;
    NSTextParagraph * _textParagraphForEmptyDocument;
    NSTextSelectionNavigation * _textSelectionNavigation;
    NSArray * _textSelections;
    bool  _usesFontLeading;
    bool  _usesHyphenation;
}

@property (readonly) NSTextLineFragment *_extraTextLineFragment;
@property bool breaksLinesForInteractiveText;
@property (readonly, copy) NSString *debugDescription;
@property <NSTextLayoutManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSTextRange *documentRange;
@property (readonly) bool hasNonSimpleRectangularTextContainer;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ isSelectionOverridableColor;
@property (readonly) bool lastContainerFilled;
@property (retain) NSOperationQueue *layoutQueue;
@property bool limitsLayoutForSuspiciousContents;
@property (readonly) long long maximumNumberOfLinesForLastContainer;
@property (copy) id /* block */ renderingAttributesValidator;
@property bool rendersBackgroundColorAttribute;
@property bool requiresCTLineRef;
@property (readonly) Class superclass;
@property (retain) NSTextContainer *templateTextContainer;
@property (retain) NSTextContainer *textContainer;
@property (readonly, copy) NSArray *textContainers;
@property (readonly) NSTextContentManager *textContentManager;
@property (retain) NSTextSelectionNavigation *textSelectionNavigation;
@property (retain) NSArray *textSelections;
@property (readonly) NSTextViewportLayoutController *textViewportLayoutController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ui_contentSizeForLastContainerView;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } usageBoundsForTextContainer;
@property bool usesFontLeading;
@property bool usesHyphenation;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_setThrowsOnAssertionError:(bool)arg1;
+ (void)_setValidatesInternalCaches:(bool)arg1;
+ (bool)_throwsOnAssertionError;
+ (bool)_validatesInternalCaches;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)companionLayoutManagerClass;
+ (id)linkRenderingAttributes;
+ (id)linkRenderingAttributesForLabels;
+ (long long)maximumNumberOfCachedTextLayoutFragments;
+ (long long)maximumNumberOfSeedElements;
+ (bool)shouldBeUsedForNSTextView;
+ (bool)supportsSecureCoding;
+ (bool)usesHyphenation;
+ (id)validRenderingAttributes;
+ (Class)viewportLayoutControllerClass;

- (void).cxx_destruct;
- (void)_addTextContainer:(id)arg1;
- (void)_addTextContainerForLocation:(id)arg1;
- (bool)_appendTextContainer;
- (void)_commonInit;
- (void)_configureCoreTypesetter:(id)arg1 forTextParagraph:(id)arg2 textContainer:(id)arg3;
- (id)_copyTextLineFragmentRangeForPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2 pointPlacement:(out unsigned long long*)arg3;
- (id)_currentTextLayoutFragmentEnumerated;
- (id)_estimatedTextLocationForVerticalOffset:(double)arg1 originLocation:(id)arg2 originOffset:(double)arg3;
- (id)_estimatedTextLocationForVerticalOffset:(double)arg1 originLocation:(id)arg2 originOffset:(double)arg3 deltaFromOffset:(out double*)arg4;
- (double)_estimatedVerticalSizeForTextRange:(id)arg1 adjustedTextRange:(out id*)arg2;
- (id)_extraTextLineFragment;
- (long long)_fallbackWritingDirection;
- (void)_fillLayoutToLocation:(id)arg1 enumerationCache:(struct { id x1; id x2; double x3; long long x4; long long x5; bool x6; bool x7; bool x8; }*)arg2;
- (id)_fillSoftInvalidationToLocation:(id)arg1 verticalOffset:(double)arg2;
- (void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (bool)_hasLayoutForLocation:(id)arg1;
- (void)_invalidateLayoutForTextRange:(id)arg1 hard:(bool)arg2;
- (void)_invalidateTextParagraphForEmptyDocument;
- (long long)_numberOfLinesToCurrentlyEnumeratedTextLayoutFragment;
- (void)_prepareAttributedString:(id)arg1 forTextLayoutFragment:(id)arg2;
- (void)_removeTextContainer;
- (void)_removeTextContainersToCondition:(id /* block */)arg1;
- (id)_selectionAndMarkedTextAttributesForLocation:(id)arg1 inTextRange:(id)arg2 effectiveTextRange:(out id*)arg3;
- (bool)_setSoftInvalidationLocation:(id)arg1 onlyIfUpstream:(bool)arg2;
- (bool)_shouldDrawTextCorrectionMarkerWithType:(long long)arg1 inRange:(id)arg2;
- (id)_textLayoutFragmentAtLocation:(id)arg1;
- (id)_textLineFragmentAtLocation:(id)arg1 textLayoutFragment:(out id*)arg2 rangeDelta:(out long long*)arg3;
- (id)_textParagraphForEmptyDocument;
- (id)_textRangeForDoubleClickAtLocation:(id)arg1;
- (id)_textSelectionsFromTextView;
- (id)_textViewRespondingToSelector:(SEL)arg1;
- (id)_textViewportLayoutControllerForTextContainer:(id)arg1;
- (bool)_validateTextContainerEntries;
- (id)_viewProviderForTextAttachment:(id)arg1 parentView:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (id)adjustedTextSelectionsForEditingContextFromTextSelections:(id)arg1;
- (bool)allowsAddingTextContainer;
- (bool)allowsFontSubstitutionAffectingVerticalMetrics;
- (long long)applicationFrameworkContext;
- (id)baseLocation;
- (long long)baseWritingDirectionAtLocation:(id)arg1;
- (bool)breaksLinesForInteractiveText;
- (id)companionLayoutManager;
- (void)dealloc;
- (id)delegate;
- (id)documentRange;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureLayoutForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)ensureLayoutForRange:(id)arg1;
- (void)enumerateCaretOffsetsInLineFragmentAtLocation:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateContainerBoundariesFromLocation:(id)arg1 reverse:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSubstringsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateTemporaryAttributesFromLocation:(id)arg1 reverse:(bool)arg2 usingBlock:(id /* block */)arg3;
- (id)enumerateTextLayoutFragmentsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)enumerateTextLayoutFragmentsInTextRange:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateTextSegmentsInRange:(id)arg1 type:(long long)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)finalizeAndPushLastTextContainer;
- (bool)flushTextLayoutFragmentsFromLocation:(id)arg1 direction:(bool)arg2;
- (bool)hasNonSimpleRectangularTextContainer;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateLayoutForRange:(id)arg1;
- (void)invalidateRenderingAttributesForTextRange:(id)arg1;
- (void)invalidateTemporaryAttributesForTextRange:(id)arg1;
- (bool)isCountableDataSource;
- (id /* block */)isSelectionOverridableColor;
- (bool)lastContainerFilled;
- (id)layoutQueue;
- (bool)limitsLayoutForSuspiciousContents;
- (id)lineFragmentRangeForPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2;
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;
- (long long)maximumNumberOfCachedTextLayoutFragments;
- (long long)maximumNumberOfLinesForLastContainer;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
- (unsigned long long)placementOfPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2;
- (void)processLayoutInvalidationForTextRange:(id)arg1 synchronizing:(bool)arg2;
- (id)rangeForTextContainerAtIndex:(long long)arg1;
- (void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2;
- (void)removeTemporaryAttribute:(id)arg1 forTextRange:(id)arg2;
- (id)renderingAttributesForLink:(id)arg1 atLocation:(id)arg2;
- (id /* block */)renderingAttributesValidator;
- (id)renderingColorForDocumentColor:(id)arg1 atLocation:(id)arg2;
- (bool)rendersBackgroundColorAttribute;
- (void)replaceCharactersInRange:(id)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(id)arg1 withElements:(id)arg2;
- (void)replaceContentsInRange:(id)arg1 withAttributedString:(id)arg2;
- (void)replaceContentsInRange:(id)arg1 withTextElements:(id)arg2;
- (void)replaceTextContentManager:(id)arg1;
- (bool)requiresCTLineRef;
- (void)setAllowsFontSubstitutionAffectingVerticalMetrics:(bool)arg1;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setBreaksLinesForInteractiveText:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsSelectionOverridableColor:(id /* block */)arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setLimitsLayoutForSuspiciousContents:(bool)arg1;
- (void)setMaximumNumberOfCachedTextLayoutFragments:(long long)arg1;
- (void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2;
- (void)setRenderingAttributesValidator:(id /* block */)arg1;
- (void)setRendersBackgroundColorAttribute:(bool)arg1;
- (void)setRequiresCTLineRef:(bool)arg1;
- (void)setTemplateTextContainer:(id)arg1;
- (void)setTemporaryAttributes:(id)arg1 forTextRange:(id)arg2;
- (void)setTextContainer:(id)arg1;
- (void)setTextContentManager:(id)arg1;
- (void)setTextSelectionNavigation:(id)arg1;
- (void)setTextSelections:(id)arg1;
- (void)setUsesDefaultHyphenation:(bool)arg1;
- (void)setUsesFontLeading:(bool)arg1;
- (void)setUsesHyphenation:(bool)arg1;
- (void)setViewProvider:(id)arg1 forTextAttachment:(id)arg2 location:(id)arg3;
- (void)synchronize;
- (id)templateTextContainer;
- (id)temporaryAttributesTable;
- (id)textContainer;
- (void)textContainerChangedGeometry:(id)arg1;
- (id)textContainerForLocation:(id)arg1;
- (id)textContainers;
- (id)textContentManager;
- (id)textLayoutFragmentForLocation:(id)arg1;
- (id)textLayoutFragmentForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)textLayoutFragmentForPosition:(struct CGPoint { double x1; double x2; })arg1 inTextContainerAtIndex:(long long)arg2;
- (id)textLayoutFragmentForPosition:(struct CGPoint { double x1; double x2; })arg1 inTextContainerAtIndex:(long long)arg2 avoidsAdditionalLayout:(bool)arg3;
- (long long)textLayoutOrientationAtLocation:(id)arg1;
- (id)textRangeForSelectionGranularity:(long long)arg1 enclosingLocation:(id)arg2;
- (id)textSelectionNavigation;
- (id)textSelections;
- (id)textViewportLayoutController;
- (void)updateLayoutWithTextLayoutFragment:(id)arg1 addition:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usageBoundsForLastTextContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usageBoundsForTextContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usageBoundsInTextContainerAtIndex:(long long)arg1;
- (bool)usesContiguousLayout;
- (bool)usesDefaultHyphenation;
- (bool)usesFontLeading;
- (bool)usesHyphenation;
- (id)viewProviderForTextAttachment:(id)arg1 location:(id)arg2;
- (id)viewportLayoutController;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (unsigned long long)ck_animatingMentionsGlyphCount;

// Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit

- (void)_enumerateAllTokenListsUsingBlock_emk:(id /* block */)arg1;
- (void)_enumerateTextLineFragmentsInTextRange:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromTextRange_emk:(id)arg1;
- (unsigned long long)animatingGlyphCount_emk;
- (void)enumerateAllTextParagraphsUsingBlock_emk:(id /* block */)arg1;
- (void)enumerateTextParagraphsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock_emk:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeForTextRange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_rectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ic_textRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (struct CGSize { double x1; double x2; })ui_contentSizeForLastContainerView;
- (void)ui_ensureLayoutForViewportBoundsAtRange:(id)arg1;

@end