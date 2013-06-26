/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class EDWarnings, ESDContainer, EDProcessors, NSMutableArray, EDReference, OADTheme, ECMappingContext, EDResources, NSString, NSDate;

@interface EDWorkbook : OCDDocument {
	EDResources *mResources;	// 20 = 0x14
	NSMutableArray *mOtherResources;	// 24 = 0x18
	EDProcessors *mProcessors;	// 28 = 0x1c
	ECMappingContext *mMappingContext;	// 32 = 0x20
	EDWarnings *mWarnings;	// 36 = 0x24
	NSMutableArray *mSheets;	// 40 = 0x28
	EDReference *mVisibleRange;	// 44 = 0x2c
	unsigned mActiveSheetIndex;	// 48 = 0x30
	NSDate *mDateBaseDate;	// 52 = 0x34
	unsigned mDateBase;	// 56 = 0x38
	NSString *mFileName;	// 60 = 0x3c
	NSString *mTemporaryDirectory;	// 64 = 0x40
	OADTheme *mTheme;	// 68 = 0x44
	ESDContainer *mEscherDrawingGroup;	// 72 = 0x48
}
@property(retain) id activeSheet;	// G=0x36bf7b69; S=0x36bf7b91; converted property
@property(assign) unsigned activeSheetIndex;	// G=0x36bf7d3d; S=0x36a5df29; converted property
@property(assign) unsigned dateBase;	// G=0x36a6d001; S=0x36a5c21d; converted property
@property(retain) id escherDrawingGroup;	// G=0x36bf7c75; S=0x36bf7c85; converted property
@property(retain) id mappingContext;	// G=0x36b4e0e1; S=0x36bf7bb9; converted property
@property(retain) id resources;	// G=0x36a5be49; S=0x36bf78c1; converted property
@property(retain) id temporaryDirectory;	// G=0x36bf7915; S=0x36a5bc85; converted property
@property(retain) id theme;	// G=0x36a6bf41; S=0x36bf7c39; converted property
@property(retain) id visibleRange;	// G=0x36bf7aa9; S=0x36b7c049; converted property
- (id)init;	// 0x36bf78ad
- (id)initWithFileName:(id)fileName andStringOptimization:(bool)optimization;	// 0x36a5aaa5
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x36a5aae5
// converted property getter: - (id)activeSheet;	// 0x36bf7b69
// converted property getter: - (unsigned)activeSheetIndex;	// 0x36bf7d3d
- (void)addOtherResources:(id)resources;	// 0x36b62c49
- (void)addSheet:(id)sheet;	// 0x36a6c7c9
- (void)applyProcessors;	// 0x36bf7bfd
// converted property getter: - (unsigned)dateBase;	// 0x36a6d001
- (id)dateBaseDate;	// 0x36bf794d
- (void)dealloc;	// 0x36a8a01d
// converted property getter: - (id)escherDrawingGroup;	// 0x36bf7c75
- (id)fileName;	// 0x36bf7905
- (unsigned)indexOfSheet:(id)sheet;	// 0x36b67475
- (unsigned)indexOfSheetWithName:(id)name;	// 0x36bf7ab9
// converted property getter: - (id)mappingContext;	// 0x36b4e0e1
- (id)processors;	// 0x36a5bcc9
- (void)reduceMemoryIfPossible;	// 0x36bf7cc1
- (void)removeWorksheetAtIndex:(unsigned)index;	// 0x36baf361
// converted property getter: - (id)resources;	// 0x36a5be49
// converted property setter: - (void)setActiveSheet:(id)sheet;	// 0x36bf7b91
// converted property setter: - (void)setActiveSheetIndex:(unsigned)index;	// 0x36a5df29
// converted property setter: - (void)setDateBase:(unsigned)base;	// 0x36a5c21d
// converted property setter: - (void)setEscherDrawingGroup:(id)group;	// 0x36bf7c85
// converted property setter: - (void)setMappingContext:(id)context;	// 0x36bf7bb9
// converted property setter: - (void)setResources:(id)resources;	// 0x36bf78c1
// converted property setter: - (void)setTemporaryDirectory:(id)directory;	// 0x36a5bc85
// converted property setter: - (void)setTheme:(id)theme;	// 0x36bf7c39
// converted property setter: - (void)setVisibleRange:(id)range;	// 0x36b7c049
- (id)sheetAtIndex:(unsigned)index;	// 0x36a6d2dd
- (id)sheetAtIndex:(unsigned)index loadIfNeeded:(bool)needed;	// 0x36a6d0d1
- (unsigned)sheetCount;	// 0x36a6d0b1
// converted property getter: - (id)temporaryDirectory;	// 0x36bf7915
// converted property getter: - (id)theme;	// 0x36a6bf41
// converted property getter: - (id)visibleRange;	// 0x36bf7aa9
- (id)warnings;	// 0x36b6b695
- (id)workbookName;	// 0x36a89e81
@end
