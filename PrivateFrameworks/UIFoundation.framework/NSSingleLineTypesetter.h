
@interface NSSingleLineTypesetter : NSATSTypesetter {
    unsigned long long * _charIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentBufferRange;
    unsigned short * _glyphs;
    double  _lineWidth;
    long long * _props;
    struct { 
        unsigned int _usesScreenFonts : 1; 
        unsigned int _syncAlignmentToDirection : 1; 
        unsigned int _mirrorsTextAlignment : 1; 
        unsigned int _reserved : 29; 
    }  _slFlags;
    __NSImmutableTextStorage * _textStorage;
}

+ (bool)_validateAttributes:(id)arg1 measuringOnly:(bool)arg2;
+ (void)initialize;
+ (void)performWithSingleLineTypesetterContext:(id /* block */)arg1;

- (bool)_allowsEllipsisGlyphSubstitution;
- (bool)_mirrorsTextAlignment;
- (id)_textContainerForAttachmentProtocol;
- (id)_textStorageForAttachmentProtocol;
- (bool)_usesScreenFonts;
- (id)attributedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(bool)arg3 hasStrongRight:(bool)arg4 maximumWidth:(double)arg5;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(bool)arg3 hasStrongRight:(bool)arg4 syncDirection:(bool)arg5 mirrorsTextAlignment:(bool)arg6 maximumWidth:(double)arg7;
- (void)dealloc;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char *)arg5;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)init;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)insertGlyphs:(const unsigned int*)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4;
- (unsigned long long)layoutOptions;
- (void)setAttachmentSize:(struct CGSize { double x1; double x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDrawsOutsideLineFragment:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 baselineOffset:(double)arg4;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setNotShownAttribute:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)substituteFontForFont:(id)arg1;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGlyphs:(unsigned int*)arg2;
- (bool)synchronizesAlignmentToDirection;

@end