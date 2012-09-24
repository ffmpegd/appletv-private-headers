/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument;

@interface WDCharacterProperties : NSObject {
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_F4yHWB *mOriginalProperties;	// 12 = 0xc
	XXStruct_F4yHWB *mTrackedProperties;	// 16 = 0x10
}
@property(retain) id baseStyle;	// G=0x34f5d3f1; S=0x34f3ea45; converted property
@property(assign) int bold;	// G=0x34f58de5; S=0x34f2f755; converted property
@property(assign) int bracketTwoLinesInOne;	// G=0x351058a1; S=0x3510593d; converted property
@property(assign) int caps;	// G=0x34f5cbed; S=0x34f302f9; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x3502b941; S=0x34faea35; converted property
@property(retain) id color;	// G=0x34f3c0f1; S=0x34f2fde1; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x35103ff5; S=0x34f3c189; converted property
@property(assign) BOOL compressHorizontalInVertical;	// G=0x351054dd; S=0x35105579; converted property
@property(assign) int deleted;	// G=0x3501d311; S=0x3501d1ed; converted property
@property(assign) int doubleStrikeThrough;	// G=0x3501eda9; S=0x34f2fc39; converted property
@property(assign) int edited;	// G=0x351043e1; S=0x3501d141; converted property
@property(assign) BOOL embeddedObject;	// G=0x35104b9d; S=0x35104c39; converted property
@property(assign) int embossed;	// G=0x3510289d; S=0x34f2f955; converted property
@property(assign) int emphasisMark;	// G=0x35103e21; S=0x35103ebd; converted property
@property(retain) id extendedFont;	// G=0x351020f9; S=0x34f307d1; converted property
@property(retain) id farEastFont;	// G=0x35102249; S=0x34f30725; converted property
@property(retain) id font;	// G=0x34f589a5; S=0x34f30679; converted property
@property(assign) unsigned short fontSize;	// G=0x34f58799; S=0x34f30579; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x35104a49; S=0x34fa2dd5; converted property
@property(assign) int formattingChanged;	// G=0x35104535; S=0x351045d1; converted property
@property(assign) int hidden;	// G=0x34fa9b99; S=0x34f30379; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x35103111; S=0x350043d1; converted property
@property(assign) int highlightColor;	// G=0x35103259; S=0x34f301f9; converted property
@property(assign) BOOL horizontalInVertical;	// G=0x351052f9; S=0x35105395; converted property
@property(assign) int imprint;	// G=0x351029e5; S=0x34f2f9d5; converted property
@property(assign) int italic;	// G=0x34f8a959; S=0x34f2f7d5; converted property
@property(assign) unsigned short kerning;	// G=0x35102fbd; S=0x34f305f9; converted property
@property(assign) int languageForBiText;	// G=0x351048f9; S=0x34f30a29; converted property
@property(assign) int languageForDefaultText;	// G=0x35104149; S=0x34f30929; converted property
@property(assign) int languageForFarEast;	// G=0x351047a5; S=0x34f309a9; converted property
@property(assign) int ligature;	// G=0x351033ad; S=0x35103449; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x34faeab5; S=0x34fae9a5; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x35103581; S=0x3510361d; converted property
@property(assign) long objectIDForOle2;	// G=0x35104f65; S=0x35104ff9; converted property
@property(assign) long offsetToPictureData;	// G=0x35105129; S=0x351051c1; converted property
@property(assign) BOOL ole2;	// G=0x35104d81; S=0x35104e1d; converted property
@property(assign) int outline;	// G=0x35102749; S=0x34f2f855; converted property
@property(assign) short position;	// G=0x351038a9; S=0x34f30479; converted property
@property(retain) id reflection;	// G=0x351039f9; S=0x35103a91; converted property
@property(assign) int resolveMode;	// G=0x3510090d; S=0x34f2f6e9; converted property
@property(assign) int rightToLeft;	// G=0x3510428d; S=0x34fed289; converted property
@property(assign) int shadow;	// G=0x35102b39; S=0x34f2f8d5; converted property
@property(retain) id shadow2010;	// G=0x35103bd9; S=0x35103c71; converted property
@property(assign) float shadow2010Opacity;	// G=0x35102c8d; S=0x35102d31; converted property
@property(assign) int smallCaps;	// G=0x34fee561; S=0x34f30279; converted property
@property(assign) short spacing;	// G=0x35103765; S=0x34f303f9; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x35104651; S=0x34f47f31; converted property
@property(assign) int strikeThrough;	// G=0x3500b821; S=0x34f2fbb9; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x351025f5; S=0x34f9cd35; converted property
@property(retain) id symbolFont;	// G=0x35102399; S=0x34f3087d; converted property
@property(assign) BOOL twoLinesInOne;	// G=0x351056c1; S=0x3510575d; converted property
@property(assign) int underline;	// G=0x34f3d149; S=0x34f2fa55; converted property
@property(retain) id underlineColor;	// G=0x35102e6d; S=0x34f2fb11; converted property
@property(assign) int verticalAlign;	// G=0x34f5e371; S=0x34f304f9; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x351025b1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x3510256d
+ (int)languageFromString:(id)string;	// 0x34f39065
+ (BOOL)languageIsArabicOrHebrew:(int)hebrew;	// 0x35105fa5
+ (BOOL)languageIsCJK:(int)cjk;	// 0x35105f75
+ (BOOL)languageIsChinese:(int)chinese;	// 0x35105f29
- (id)initWithDocument:(id)document;	// 0x34f2f651
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x35100955
// converted property getter: - (id)baseStyle;	// 0x34f5d3f1
// converted property getter: - (int)bold;	// 0x34f58de5
- (id)border;	// 0x35101fa9
// converted property getter: - (int)bracketTwoLinesInOne;	// 0x351058a1
// converted property getter: - (int)caps;	// 0x34f5cbed
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x3502b941
- (void)clearBaseStyle;	// 0x34f7dcf1
// converted property getter: - (id)color;	// 0x34f3c0f1
// converted property getter: - (BOOL)compressHorizontalInVertical;	// 0x351054dd
- (void)copyPropertiesInto:(id)into;	// 0x35105c59
- (id)copyWithZone:(NSZone *)zone;	// 0x35105a75
- (void)dealloc;	// 0x34f5f1c5
// converted property getter: - (int)deleted;	// 0x3501d311
- (id)document;	// 0x34f39045
// converted property getter: - (int)doubleStrikeThrough;	// 0x3501eda9
// converted property getter: - (int)edited;	// 0x351043e1
// converted property getter: - (BOOL)embeddedObject;	// 0x35104b9d
// converted property getter: - (int)embossed;	// 0x3510289d
// converted property getter: - (int)emphasisMark;	// 0x35103e21
// converted property getter: - (id)extendedFont;	// 0x351020f9
// converted property getter: - (id)farEastFont;	// 0x35102249
// converted property getter: - (id)font;	// 0x34f589a5
- (id)fontForLanguageType:(int)languageType;	// 0x351024dd
// converted property getter: - (unsigned short)fontSize;	// 0x34f58799
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x35104a49
// converted property getter: - (int)formattingChanged;	// 0x35104535
// converted property getter: - (int)hidden;	// 0x34fa9b99
// converted property getter: - (int)highlightColor;	// 0x35103259
// converted property getter: - (BOOL)horizontalInVertical;	// 0x351052f9
// converted property getter: - (int)imprint;	// 0x351029e5
- (BOOL)isAnythingOverridden;	// 0x35100859
- (BOOL)isAnythingOverriddenIn:(XXStruct_F4yHWB *)anIn;	// 0x35106085
- (BOOL)isBaseStyleOverridden;	// 0x34f57acd
- (BOOL)isBoldOverridden;	// 0x34f58401
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x35106161
- (BOOL)isBorderOverridden;	// 0x35102041
- (BOOL)isBracketTwoLinesInOneOverridden;	// 0x351059bd
- (BOOL)isCapsOverridden;	// 0x34f58bbd
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x3502b891
// converted property getter: - (BOOL)isColorAuto;	// 0x35103ff5
- (BOOL)isColorAutoOverridden;	// 0x35104091
- (BOOL)isColorOverridden;	// 0x34f58c75
- (BOOL)isCompressHorizontalInVerticalOverridden;	// 0x35105609
- (BOOL)isDeletedOverridden;	// 0x34f592c9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x34f58629
- (BOOL)isEditedOverridden;	// 0x3510447d
- (BOOL)isEmbeddedObjectOverridden;	// 0x35104cc9
- (BOOL)isEmbossedOverridden;	// 0x35102935
- (BOOL)isEmphasisMarkOverridden;	// 0x35103f3d
- (BOOL)isExtendedFontOverridden;	// 0x35102191
- (BOOL)isFarEastFontOverridden;	// 0x351022e1
- (BOOL)isFontOverridden;	// 0x34f588ed
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x35102521
- (BOOL)isFontSizeForBiTextOverridden;	// 0x35104ae5
- (BOOL)isFontSizeOverridden;	// 0x34f586e1
- (BOOL)isFormattingChangedOverridden;	// 0x34f3a501
- (BOOL)isHiddenOverridden;	// 0x34f59381
// converted property getter: - (BOOL)isHighlight;	// 0x35103111
- (BOOL)isHighlightColorOverridden;	// 0x351032f5
- (BOOL)isHighlightOverridden;	// 0x351031a9
- (BOOL)isHorizontalInVerticalOverridden;	// 0x35105425
- (BOOL)isImprintOverridden;	// 0x35102a81
- (BOOL)isItalicOverridden;	// 0x34f584b9
- (BOOL)isKerningOverridden;	// 0x35103059
- (BOOL)isLanguageForBiTextOverridden;	// 0x35104991
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x351041dd
- (BOOL)isLanguageForFarEastOverridden;	// 0x35104841
- (BOOL)isLigatureOverridden;	// 0x351034c9
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x34faeab5
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x34f81bf9
// converted property getter: - (BOOL)isLowerCase;	// 0x35103581
- (BOOL)isLowerCaseOverridden;	// 0x351036ad
- (BOOL)isObjectIDForOle2Overridden;	// 0x35105079
- (BOOL)isOffsetToPictureDataOverridden;	// 0x35105241
- (BOOL)isOle2Overridden;	// 0x35104ead
- (BOOL)isOutlineOverridden;	// 0x351027e5
- (BOOL)isPositionOverridden;	// 0x35103941
- (BOOL)isReflectionOverridden;	// 0x35103b21
- (BOOL)isRightToLeftOverridden;	// 0x35104329
- (BOOL)isShadingOverridden;	// 0x34f58d2d
- (BOOL)isShadow2010OpacityOverridden;	// 0x35102db5
- (BOOL)isShadow2010Overridden;	// 0x35103d69
- (BOOL)isShadowOverridden;	// 0x35102bd5
- (BOOL)isSmallCapsOverridden;	// 0x34f58b05
- (BOOL)isSpacingOverridden;	// 0x351037f9
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x35104651
- (BOOL)isSpecialCharacterOverridden;	// 0x351046ed
- (BOOL)isStrikeThroughOverridden;	// 0x34f58571
- (BOOL)isSymbolCharacterOverridden;	// 0x35102691
- (BOOL)isSymbolFontOverridden;	// 0x3510242d
- (BOOL)isTwoLinesInOneOverridden;	// 0x351057e9
- (BOOL)isUnderlineColorOverridden;	// 0x35102f05
- (BOOL)isUnderlineOverridden;	// 0x34f58a4d
- (BOOL)isVerticalAlignOverridden;	// 0x34f58835
// converted property getter: - (int)italic;	// 0x34f8a959
// converted property getter: - (unsigned short)kerning;	// 0x35102fbd
// converted property getter: - (int)languageForBiText;	// 0x351048f9
// converted property getter: - (int)languageForDefaultText;	// 0x35104149
// converted property getter: - (int)languageForFarEast;	// 0x351047a5
// converted property getter: - (int)ligature;	// 0x351033ad
- (id)mutableBorder;	// 0x34f2fcb9
- (id)mutableShading;	// 0x34f2fe89
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x34f39485
// converted property getter: - (long)objectIDForOle2;	// 0x35104f65
// converted property getter: - (long)offsetToPictureData;	// 0x35105129
// converted property getter: - (BOOL)ole2;	// 0x35104d81
// converted property getter: - (int)outline;	// 0x35102749
// converted property getter: - (short)position;	// 0x351038a9
// converted property getter: - (id)reflection;	// 0x351039f9
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x3510157d
// converted property getter: - (int)resolveMode;	// 0x3510090d
- (int)reverseBooleanProperty:(int)property;	// 0x35106185
// converted property getter: - (int)rightToLeft;	// 0x3510428d
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x34f3ea45
// converted property setter: - (void)setBold:(int)bold;	// 0x34f2f755
// converted property setter: - (void)setBracketTwoLinesInOne:(int)one;	// 0x3510593d
// converted property setter: - (void)setCaps:(int)caps;	// 0x34f302f9
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x34faea35
// converted property setter: - (void)setColor:(id)color;	// 0x34f2fde1
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x34f3c189
// converted property setter: - (void)setCompressHorizontalInVertical:(BOOL)vertical;	// 0x35105579
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x3501d1ed
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x34f2fc39
// converted property setter: - (void)setEdited:(int)edited;	// 0x3501d141
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x35104c39
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x34f2f955
// converted property setter: - (void)setEmphasisMark:(int)mark;	// 0x35103ebd
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x34f307d1
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x34f30725
// converted property setter: - (void)setFont:(id)font;	// 0x34f30679
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x34f30579
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x34fa2dd5
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x351045d1
// converted property setter: - (void)setHidden:(int)hidden;	// 0x34f30379
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x350043d1
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x34f301f9
// converted property setter: - (void)setHorizontalInVertical:(BOOL)vertical;	// 0x35105395
// converted property setter: - (void)setImprint:(int)imprint;	// 0x34f2f9d5
// converted property setter: - (void)setItalic:(int)italic;	// 0x34f2f7d5
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x34f305f9
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x34f30a29
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x34f30929
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x34f309a9
// converted property setter: - (void)setLigature:(int)ligature;	// 0x35103449
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x34fae9a5
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x3510361d
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x35104ff9
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x351051c1
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x35104e1d
// converted property setter: - (void)setOutline:(int)outline;	// 0x34f2f855
// converted property setter: - (void)setPosition:(short)position;	// 0x34f30479
// converted property setter: - (void)setReflection:(id)reflection;	// 0x35103a91
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34f2f6e9
// converted property setter: - (void)setRightToLeft:(int)left;	// 0x34fed289
// converted property setter: - (void)setShadow2010:(id)a2010;	// 0x35103c71
// converted property setter: - (void)setShadow2010Opacity:(float)opacity;	// 0x35102d31
// converted property setter: - (void)setShadow:(int)shadow;	// 0x34f2f8d5
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x34f30279
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x34f303f9
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x34f47f31
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x34f2fbb9
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x34f9cd35
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x34f3087d
// converted property setter: - (void)setTwoLinesInOne:(BOOL)one;	// 0x3510575d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x34f2fa55
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x34f2fb11
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x34f304f9
- (id)shading;	// 0x3501d279
// converted property getter: - (int)shadow;	// 0x35102b39
// converted property getter: - (id)shadow2010;	// 0x35103bd9
// converted property getter: - (float)shadow2010Opacity;	// 0x35102c8d
// converted property getter: - (int)smallCaps;	// 0x34fee561
// converted property getter: - (short)spacing;	// 0x35103765
// converted property getter: - (int)strikeThrough;	// 0x3500b821
// converted property getter: - (unsigned short)symbolCharacter;	// 0x351025f5
// converted property getter: - (id)symbolFont;	// 0x35102399
// converted property getter: - (BOOL)twoLinesInOne;	// 0x351056c1
// converted property getter: - (int)underline;	// 0x34f3d149
// converted property getter: - (id)underlineColor;	// 0x35102e6d
// converted property getter: - (int)verticalAlign;	// 0x34f5e371
@end
