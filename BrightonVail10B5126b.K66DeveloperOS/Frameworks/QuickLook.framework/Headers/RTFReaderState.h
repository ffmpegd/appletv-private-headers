/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary, RTFTextTable, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface RTFReaderState : NSObject {
	id _delegate;	// 4 = 0x4
	unsigned long _defaultToUniCharEncoding;	// 8 = 0x8
	NSMutableDictionary *_documentInfoDictionary;	// 12 = 0xc
	CGSize _paperSize;	// 16 = 0x10
	float _lMargin;	// 24 = 0x18
	float _rMargin;	// 28 = 0x1c
	float _bMargin;	// 32 = 0x20
	float _tMargin;	// 36 = 0x24
	CGSize _viewSize;	// 40 = 0x28
	int _viewScale;	// 48 = 0x30
	int _viewKind;	// 52 = 0x34
	NSMutableArray *_attributesStack;	// 56 = 0x38
	NSMutableDictionary *_curAttributes;	// 60 = 0x3c
	unsigned _level;	// 64 = 0x40
	NSAttributeInfo _attributeInfo;	// 68 = 0x44
	NSMutableData *_attributeInfoStack;	// 100 = 0x64
	int _tableNestingLevel;	// 104 = 0x68
	BOOL _isRTLDocument;	// 108 = 0x6c
	NSArray *_textBlocks;	// 112 = 0x70
	NSMutableArray *_nestedTables;	// 116 = 0x74
	RTFTextTable *_currentTable;	// 120 = 0x78
	RTFTextTable *_previousTable;	// 124 = 0x7c
	NSMutableArray *_currentRowArray;	// 128 = 0x80
	NSMutableArray *_previousRowArray;	// 132 = 0x84
	int _currentRow;	// 136 = 0x88
	int _currentColumn;	// 140 = 0x8c
	int _currentDefinitionColumn;	// 144 = 0x90
	BOOL _currentRowIsLast;	// 148 = 0x94
	BOOL _setTableCells;	// 149 = 0x95
	unsigned _currentBorderEdge;	// 152 = 0x98
	BOOL _currentBorderIsTable;	// 156 = 0x9c
	NSMutableDictionary *_listDefinitions;	// 160 = 0xa0
	int _currentListNumber;	// 164 = 0xa4
	int _currentListLevel;	// 168 = 0xa8
}
@property(assign) int baseWritingDirection;	// G=0x32a26535; S=0x32a2651d; converted property
@property(assign) BOOL bold;	// G=0x32a26455; S=0x32a2643d; converted property
@property(assign) float bottomMargin;	// G=0x32a26285; S=0x32a26275; converted property
@property(assign) unsigned long codePageEncoding;	// G=0x32a263b1; S=0x32a2639d; converted property
@property(readonly, assign) unsigned currentBorderEdge;	// G=0x32a26cb9; converted property
@property(readonly, assign) BOOL currentBorderIsTable;	// G=0x32a26cc9; converted property
@property(assign) int currentListLevel;	// G=0x32a279f5; S=0x32a27a05; converted property
@property(assign) int currentListNumber;	// G=0x32a279d5; S=0x32a279e5; converted property
@property(readonly, retain) RTFTextTable *currentTable;	// G=0x32a26c4d; converted property
@property(assign) unsigned long defaultToUniCharEncoding;	// G=0x32a2636d; S=0x32a2635d; converted property
@property(readonly, retain) NSMutableDictionary *documentInfoDictionary;	// G=0x32a26199; converted property
@property(retain) id font;	// G=0x32a264b1; S=0x32a2649d; converted property
@property(assign) float fontSize;	// G=0x32a264d9; S=0x32a264c5; converted property
@property(assign) BOOL hasWritingDirectionAttribute;	// G=0x32a26505; S=0x32a264ed; converted property
@property(assign) BOOL italic;	// G=0x32a26485; S=0x32a2646d; converted property
@property(assign) float leftMargin;	// G=0x32a26225; S=0x32a26215; converted property
@property(readonly, assign) unsigned level;	// G=0x32a2634d; converted property
@property(readonly, retain) NSMutableDictionary *listDefinitions;	// G=0x32a27a15; converted property
@property(assign) BOOL multiByteEncoding;	// G=0x32a263dd; S=0x32a263c5; converted property
@property(assign) CGSize paperSize;	// G=0x32a261fd; S=0x32a261e9; converted property
@property(assign) float rightMargin;	// G=0x32a26245; S=0x32a26235; converted property
@property(assign) unsigned long toUniCharEncoding;	// G=0x32a2638d; S=0x32a2637d; converted property
@property(assign) float topMargin;	// G=0x32a26265; S=0x32a26255; converted property
@property(assign) unsigned unicodeAlternativeLength;	// G=0x32a2640d; S=0x32a263f5; converted property
@property(assign) CGSize viewSize;	// G=0x32a262a9; S=0x32a26295; converted property
- (id)initWithDelegate:(id)delegate;	// 0x32a25d41
- (void)_beginTableRow;	// 0x32a26b1d
- (void)_clearTableCells;	// 0x32a27311
- (BOOL)_currentTableCellIsPlaceholder;	// 0x32a26cd9
- (void)_ensureTableCells;	// 0x32a26941
- (void)_notifyEndParagraph;	// 0x32a27c9d
- (void)_notifyEndTable;	// 0x32a27d3d
- (void)_notifyEndTableCellWithCell:(id)cell;	// 0x32a27e7d
- (void)_notifyEndTableRow;	// 0x32a27ddd
- (void)_notifyProcessString:(id)string;	// 0x32a27bf1
- (void)_notifyStartParagraph;	// 0x32a27c4d
- (void)_notifyStartTable;	// 0x32a27ced
- (void)_notifyStartTableCell;	// 0x32a27e2d
- (void)_notifyStartTableRow;	// 0x32a27d8d
- (void)_paragraphInTable;	// 0x32a27581
- (void)_popTableState;	// 0x32a26f95
- (void)_pushTableState;	// 0x32a26dcd
- (void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x32a26dad
- (void)_setTableCells;	// 0x32a27149
- (void)_updateAttributes;	// 0x32a267c5
- (void)addListDefinition:(id)definition forKey:(int)key;	// 0x32a27a25
- (void)addOverride:(int)override forKey:(int)key;	// 0x32a27ad5
- (id)attributeForKey:(id)key;	// 0x32a26579
// converted property getter: - (int)baseWritingDirection;	// 0x32a26535
// converted property getter: - (BOOL)bold;	// 0x32a26455
// converted property getter: - (float)bottomMargin;	// 0x32a26285
// converted property getter: - (unsigned long)codePageEncoding;	// 0x32a263b1
- (id)currentAttributes;	// 0x32a2633d
// converted property getter: - (unsigned)currentBorderEdge;	// 0x32a26cb9
// converted property getter: - (BOOL)currentBorderIsTable;	// 0x32a26cc9
// converted property getter: - (int)currentListLevel;	// 0x32a279f5
// converted property getter: - (int)currentListNumber;	// 0x32a279d5
- (id)currentParagraphStyle;	// 0x32a266cd
// converted property getter: - (id)currentTable;	// 0x32a26c4d
- (id)currentTableCell;	// 0x32a26c5d
- (BOOL)currentTableCellIsPlaceholder;	// 0x32a2686d
- (void)dealloc;	// 0x32a25f4d
- (id)defaultParagraphStyle;	// 0x32a26601
// converted property getter: - (unsigned long)defaultToUniCharEncoding;	// 0x32a2636d
// converted property getter: - (id)documentInfoDictionary;	// 0x32a26199
- (void)endParagraph;	// 0x32a26735
- (void)endTableCell;	// 0x32a275d1
- (void)endTableCellDefinition;	// 0x32a27531
- (void)endTableRow;	// 0x32a276b5
// converted property getter: - (id)font;	// 0x32a264b1
// converted property getter: - (float)fontSize;	// 0x32a264d9
// converted property getter: - (BOOL)hasWritingDirectionAttribute;	// 0x32a26505
- (BOOL)isLastTableRow;	// 0x32a276a5
// converted property getter: - (BOOL)italic;	// 0x32a26485
- (void)lastTableRow;	// 0x32a27691
// converted property getter: - (float)leftMargin;	// 0x32a26225
// converted property getter: - (unsigned)level;	// 0x32a2634d
// converted property getter: - (id)listDefinitions;	// 0x32a27a15
- (void)mergeTableCellsHorizontally;	// 0x32a27815
- (void)mergeTableCellsVertically;	// 0x32a278c9
// converted property getter: - (BOOL)multiByteEncoding;	// 0x32a263dd
- (id)mutableAttributes;	// 0x32a262e1
- (id)mutableParagraphStyle;	// 0x32a26649
// converted property getter: - (CGSize)paperSize;	// 0x32a261fd
- (void)paragraphInTable;	// 0x32a267fd
- (void)popState;	// 0x32a26089
- (void)processString:(id)string;	// 0x32a26745
- (void)pushState;	// 0x32a26001
- (void)removeAttributeForKey:(id)key;	// 0x32a265d5
// converted property getter: - (float)rightMargin;	// 0x32a26245
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x32a265a5
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x32a2651d
// converted property setter: - (void)setBold:(BOOL)bold;	// 0x32a2643d
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x32a26275
// converted property setter: - (void)setCodePageEncoding:(unsigned long)encoding;	// 0x32a2639d
- (void)setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x32a279b5
// converted property setter: - (void)setCurrentListLevel:(int)level;	// 0x32a27a05
// converted property setter: - (void)setCurrentListNumber:(int)number;	// 0x32a279e5
// converted property setter: - (void)setDefaultToUniCharEncoding:(unsigned long)uniCharEncoding;	// 0x32a2635d
// converted property setter: - (void)setFont:(id)font;	// 0x32a2649d
- (void)setFontIsValid:(BOOL)valid;	// 0x32a26425
// converted property setter: - (void)setFontSize:(float)size;	// 0x32a264c5
// converted property setter: - (void)setHasWritingDirectionAttribute:(BOOL)attribute;	// 0x32a264ed
// converted property setter: - (void)setItalic:(BOOL)italic;	// 0x32a2646d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32a26215
// converted property setter: - (void)setMultiByteEncoding:(BOOL)encoding;	// 0x32a263c5
// converted property setter: - (void)setPaperSize:(CGSize)size;	// 0x32a261e9
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x32a26235
- (void)setTableFlags:(unsigned)flags;	// 0x32a2684d
- (void)setTableNestingLevel:(int)level;	// 0x32a2736d
- (void)setTextAlignment:(int)alignment;	// 0x32a2654d
// converted property setter: - (void)setToUniCharEncoding:(unsigned long)uniCharEncoding;	// 0x32a2637d
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x32a26255
// converted property setter: - (void)setUnicodeAlternativeLength:(unsigned)length;	// 0x32a263f5
- (void)setViewKind:(int)kind;	// 0x32a262c1
- (void)setViewScale:(int)scale;	// 0x32a262d1
// converted property setter: - (void)setViewSize:(CGSize)size;	// 0x32a26295
- (void)startParagraph;	// 0x32a266e1
- (void)startTableRowDefinition;	// 0x32a27521
// converted property getter: - (unsigned long)toUniCharEncoding;	// 0x32a2638d
// converted property getter: - (float)topMargin;	// 0x32a26265
// converted property getter: - (unsigned)unicodeAlternativeLength;	// 0x32a2640d
// converted property getter: - (CGSize)viewSize;	// 0x32a262a9
@end

