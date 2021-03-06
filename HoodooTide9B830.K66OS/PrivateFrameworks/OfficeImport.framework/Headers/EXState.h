/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class NSMutableArray, EDResources, NSMutableDictionary, EDSheet, OCPPackagePart, CPImportTracing, EXOAVState, EXOfficeArtState, EDWorkbook, EDReference, ECColumnWidthConvertor;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXState : OAVState {
@private
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	CFDictionaryRef mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 68 = 0x44
	EDReference *mSheetDimension;	// 72 = 0x48
	EXOfficeArtState *mOfficeArtState;	// 76 = 0x4c
	EXOAVState *mOAVState;	// 80 = 0x50
	bool mMaxColumnsWarned;	// 84 = 0x54
	bool mMaxRowsWarned;	// 85 = 0x55
	bool mIsPredefinedTableStylesRead;	// 86 = 0x56
	NSMutableDictionary *mReferenceForCommentTextBox;	// 88 = 0x58
	bool mIsPredefinedDxfsBeingRead;	// 92 = 0x5c
	xmlNs *mRelationshipNS;	// 96 = 0x60
	unsigned mTotalCellsWithContentCount;	// 100 = 0x64
	unsigned mTotalCellsWithFormulaCount;	// 104 = 0x68
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 108 = 0x6c
	NSMutableArray *mLegacyDrawables;	// 112 = 0x70
	EDWorkbook *mWorkbook;	// 116 = 0x74
	EDResources *mResources;	// 120 = 0x78
	id<OCCancelDelegate> mCancelDelegate;	// 124 = 0x7c
	CPImportTracing *mTracing;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x31338cd5; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x312882a1; S=0x31287dd1; converted property
@property(retain) id currentPart;	// G=0x31288d71; S=0x31288c49; converted property
@property(retain) id currentSheet;	// G=0x3128a669; S=0x3128a345; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x31338c8d; S=0x31289949; converted property
@property(assign) double defaultColumnWidth;	// G=0x31338c9d; S=0x3128c079; converted property
@property(assign) double defaultRowHeight;	// G=0x3128c74d; S=0x3128c08d; converted property
@property(retain) id officeArtState;	// G=0x31285b4d; S=0x312c3bb9; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x312c2fc1; S=0x312c2871; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x312c242d; S=0x312c308d; converted property
@property(retain) id resources;	// G=0x31286155; S=0x31285b3d; converted property
@property(retain) id sheetDimension;	// G=0x3128c441; S=0x3128bbc9; converted property
@property(retain) id workbook;	// G=0x31286175; S=0x31285ae9; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x312850cd
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x312cca15
- (id)arrayedFormulas;	// 0x3128d275
// declared property getter: - (id)cancelDelegate;	// 0x31338cd5
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x312882a1
- (unsigned)cellsWithContentCount;	// 0x31338cc5
- (id)columnWidthConvertor;	// 0x3128bfc9
// converted property getter: - (id)currentPart;	// 0x31288d71
// converted property getter: - (id)currentSheet;	// 0x3128a669
// converted property getter: - (unsigned)currentSheetIndex;	// 0x31338c8d
- (void)dealloc;	// 0x3128d759
// converted property getter: - (double)defaultColumnWidth;	// 0x31338c9d
// converted property getter: - (double)defaultRowHeight;	// 0x3128c74d
- (void)incrementCellsWithContentCount;	// 0x3128cb19
- (void)incrementCellsWithFormulaCount;	// 0x312cc9c5
- (BOOL)isCancelled;	// 0x31289925
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x312c2fc1
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x312c242d
- (id)legacyDrawables;	// 0x3128cfcd
- (id)oavState;	// 0x312f2305
// converted property getter: - (id)officeArtState;	// 0x31285b4d
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x31338cb5
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x312896a9
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x312dc045
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x312df8fd
- (void)resetForNewSheet;	// 0x31289d19
// converted property getter: - (id)resources;	// 0x31286155
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x31287dd1
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x31288c49
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x3128a345
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x31289949
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x3128c079
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x3128c08d
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x312c3bb9
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x312c2871
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x312c308d
// converted property setter: - (void)setResources:(id)resources;	// 0x31285b3d
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x3128bbc9
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x312f1ff9
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x31285ae9
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x312cca85
// converted property getter: - (id)sheetDimension;	// 0x3128c441
- (id)textBoxForReference:(id)reference;	// 0x312f2ea5
// converted property getter: - (id)workbook;	// 0x31286175
- (id)workbookPart;	// 0x31285a89
@end

