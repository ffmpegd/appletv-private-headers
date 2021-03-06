/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class WDDocument;

@interface WDTableProperties : NSObject <NSCopying> {
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_N4BfLC mOriginalProperties;	// 12 = 0xc
	XXStruct_N4BfLC mTrackedProperties;	// 148 = 0x94
}
@property(assign) int alignment;	// G=0x3194fe7d; S=0x3175601d; converted property
@property(retain) id baseStyle;	// G=0x31820c19; S=0x317e0d7d; converted property
@property(assign) long bottomDistanceFromText;	// G=0x31950b49; S=0x318973ad; converted property
@property(assign) short cellSpacing;	// G=0x3195050d; S=0x31863f41; converted property
@property(assign) int cellSpacingType;	// G=0x3195065d; S=0x318748dd; converted property
@property(assign) int deleted;	// G=0x31950c85; S=0x31950d21; converted property
@property(retain) id deletionDate;	// G=0x319516a5; S=0x31951741; converted property
@property(retain) id editDate;	// G=0x31951895; S=0x31951929; converted property
@property(assign) int edited;	// G=0x31950e31; S=0x31950ecd; converted property
@property(retain) id formattingChangeDate;	// G=0x31951a71; S=0x31951b0d; converted property
@property(assign) int formattingChanged;	// G=0x31950fdd; S=0x31951079; converted property
@property(assign) int horizontalAnchor;	// G=0x318642e1; S=0x31864171; converted property
@property(assign) long horizontalPosition;	// G=0x3176e8dd; S=0x3187e069; converted property
@property(assign) short indent;	// G=0x3195026d; S=0x31776729; converted property
@property(assign) int indentType;	// G=0x319503bd; S=0x31776785; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x31951189; S=0x31951229; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x3195133d; S=0x319513dd; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x319514f1; S=0x31951591; converted property
@property(assign) int justification;	// G=0x3194fd2d; S=0x317e4935; converted property
@property(assign) long leftDistanceFromText;	// G=0x3176e979; S=0x31864229; converted property
@property(assign) int resolveMode;	// G=0x3194f779; S=0x317555a9; converted property
@property(assign) long rightDistanceFromText;	// G=0x319509f9; S=0x31864285; converted property
@property(assign) long topDistanceFromText;	// G=0x3195084d; S=0x319508e9; converted property
@property(assign) int verticalAnchor;	// G=0x318742fd; S=0x31864115; converted property
@property(assign) long verticalPosition;	// G=0x31874261; S=0x318641cd; converted property
@property(assign) long width;	// G=0x3194ffcd; S=0x31776671; converted property
@property(assign) int widthType;	// G=0x3195011d; S=0x317766cd; converted property
- (id)init;	// 0x3194f739
- (id)initWithDocument:(id)document;	// 0x31755191
- (id).cxx_construct;	// 0x3175518d
// converted property getter: - (int)alignment;	// 0x3194fe7d
// converted property getter: - (id)baseStyle;	// 0x31820c19
- (id)bottomBorder;	// 0x3176d8e9
// converted property getter: - (long)bottomDistanceFromText;	// 0x31950b49
// converted property getter: - (short)cellSpacing;	// 0x3195050d
// converted property getter: - (int)cellSpacingType;	// 0x3195065d
- (void)clearBottomBorder;	// 0x3194fa71
- (void)clearInsideHorizontalBorder;	// 0x3194fbd1
- (void)clearInsideVerticalBorder;	// 0x3194fc81
- (void)clearLeftBorder;	// 0x3194f9c1
- (void)clearRightBorder;	// 0x3194fb21
- (void)clearShading;	// 0x31756079
- (void)clearTopBorder;	// 0x3194f911
- (id)copyWithZone:(NSZone *)zone;	// 0x31951c61
- (void)dealloc;	// 0x31771f51
// converted property getter: - (int)deleted;	// 0x31950c85
// converted property getter: - (id)deletionDate;	// 0x319516a5
- (id)document;	// 0x31756349
// converted property getter: - (id)editDate;	// 0x31951895
// converted property getter: - (int)edited;	// 0x31950e31
// converted property getter: - (id)formattingChangeDate;	// 0x31951a71
// converted property getter: - (int)formattingChanged;	// 0x31950fdd
// converted property getter: - (int)horizontalAnchor;	// 0x318642e1
// converted property getter: - (long)horizontalPosition;	// 0x3176e8dd
// converted property getter: - (short)indent;	// 0x3195026d
// converted property getter: - (int)indentType;	// 0x319503bd
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x31951189
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x3195133d
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x319514f1
- (id)insideHorizontalBorder;	// 0x3176dc51
- (id)insideVerticalBorder;	// 0x3176dd95
- (BOOL)isAlignmentOverridden;	// 0x3194ff19
- (BOOL)isBaseStyleOverridden;	// 0x3175865d
- (BOOL)isBottomBorderOverridden;	// 0x3176d835
- (BOOL)isBottomDistanceFromTextOverridden;	// 0x31950bdd
- (BOOL)isCellSpacingOverridden;	// 0x319505a9
- (BOOL)isCellSpacingTypeOverridden;	// 0x319506f1
- (BOOL)isDeletedOverridden;	// 0x31950d7d
- (BOOL)isDeletionDateOverridden;	// 0x319517e1
- (BOOL)isEditDateOverridden;	// 0x319519c9
- (BOOL)isEditedOverridden;	// 0x31950f29
- (BOOL)isFormattingChangeDateOverridden;	// 0x31951bad
- (BOOL)isFormattingChangedOverridden;	// 0x319510d5
- (BOOL)isHorizontalAnchorOverridden;	// 0x31758869
- (BOOL)isHorizontalPositionOverridden;	// 0x317589d1
- (BOOL)isIndentOverridden;	// 0x31950309
- (BOOL)isIndentTypeOverridden;	// 0x31950459
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x31951289
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x3195143d
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x319515f1
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x3176db9d
- (BOOL)isInsideVerticalBorderOverridden;	// 0x3176dced
- (BOOL)isJustificationOverridden;	// 0x3194fdc9
- (BOOL)isLeftBorderOverridden;	// 0x3176d6e5
- (BOOL)isLeftDistanceFromTextOverridden;	// 0x31950799
- (BOOL)isRightBorderOverridden;	// 0x3176d985
- (BOOL)isRightDistanceFromTextOverridden;	// 0x31950a95
- (BOOL)isShadingOverridden;	// 0x3194f85d
- (BOOL)isTableFloating;	// 0x31758795
- (BOOL)isTopBorderOverridden;	// 0x3176d1bd
- (BOOL)isTopDistanceFromTextOverridden;	// 0x31950945
- (BOOL)isVerticalAnchorOverridden;	// 0x3175891d
- (BOOL)isVerticalPositionOverridden;	// 0x31758a85
- (BOOL)isWidthOverridden;	// 0x31950069
- (BOOL)isWidthTypeOverridden;	// 0x319501b9
// converted property getter: - (int)justification;	// 0x3194fd2d
- (id)leftBorder;	// 0x3176d799
// converted property getter: - (long)leftDistanceFromText;	// 0x3176e979
- (void)moveOrignalToTracked;	// 0x31951e21
- (id)mutableBottomBorder;	// 0x31755dbd
- (id)mutableInsideHorizontalBorder;	// 0x31755eed
- (id)mutableInsideVerticalBorder;	// 0x31755f85
- (id)mutableLeftBorder;	// 0x31755d25
- (id)mutableRightBorder;	// 0x31755e55
- (id)mutableShading;	// 0x31874425
- (id)mutableTopBorder;	// 0x31755b4d
// converted property getter: - (int)resolveMode;	// 0x3194f779
- (id)rightBorder;	// 0x3176da39
// converted property getter: - (long)rightDistanceFromText;	// 0x319509f9
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x3175601d
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x317e0d7d
// converted property setter: - (void)setBottomDistanceFromText:(long)text;	// 0x318973ad
// converted property setter: - (void)setCellSpacing:(short)spacing;	// 0x31863f41
// converted property setter: - (void)setCellSpacingType:(int)type;	// 0x318748dd
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x31950d21
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x31951741
// converted property setter: - (void)setEditDate:(id)date;	// 0x31951929
// converted property setter: - (void)setEdited:(int)edited;	// 0x31950ecd
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x31951b0d
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x31951079
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x31864171
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x3187e069
// converted property setter: - (void)setIndent:(short)indent;	// 0x31776729
// converted property setter: - (void)setIndentType:(int)type;	// 0x31776785
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x31951229
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x319513dd
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x31951591
// converted property setter: - (void)setJustification:(int)justification;	// 0x317e4935
// converted property setter: - (void)setLeftDistanceFromText:(long)text;	// 0x31864229
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x317555a9
// converted property setter: - (void)setRightDistanceFromText:(long)text;	// 0x31864285
// converted property setter: - (void)setTopDistanceFromText:(long)text;	// 0x319508e9
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x31864115
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x318641cd
// converted property setter: - (void)setWidth:(long)width;	// 0x31776671
// converted property setter: - (void)setWidthType:(int)type;	// 0x317766cd
- (id)shading;	// 0x3194f7c1
- (id)topBorder;	// 0x3176d31d
// converted property getter: - (long)topDistanceFromText;	// 0x3195084d
// converted property getter: - (int)verticalAnchor;	// 0x318742fd
// converted property getter: - (long)verticalPosition;	// 0x31874261
// converted property getter: - (long)width;	// 0x3194ffcd
// converted property getter: - (int)widthType;	// 0x3195011d
@end

