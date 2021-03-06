/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSMapTable, UIColor, NSTextTable, NSData, NSMutableAttributedString, NSMutableDictionary, NSArray, NSFileWrapper, NSCalendar, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSRTFReader : NSObject {
	NSMutableAttributedString *_topAttributedString;	// 4 = 0x4
	NSMutableAttributedString *_curAttributedString;	// 8 = 0x8
	NSMutableArray *_attributesStack;	// 12 = 0xc
	NSMutableDictionary *_curAttributes;	// 16 = 0x10
	unsigned _level;	// 20 = 0x14
	NSData *_rtfData;	// 24 = 0x18
	NSMutableDictionary *_fontTable;	// 28 = 0x1c
	NSFileWrapper *_document;	// 32 = 0x20
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;	// 36 = 0x24
	unsigned _textBufferIndex;	// 292 = 0x124
	int _rtfVersion;	// 296 = 0x128
	int _cocoaVersion;	// 300 = 0x12c
	int _cocoaSubVersion;	// 304 = 0x130
	int _readOnly;	// 308 = 0x134
	int _usesScreenFonts;	// 312 = 0x138
	unsigned long _defaultToUniCharEncoding;	// 316 = 0x13c
	NSAttributeInfo _attributeInfo;	// 320 = 0x140
	NSMutableData *_attributeInfoStack;	// 348 = 0x15c
	CGSize _paperSize;	// 352 = 0x160
	float _lMargin;	// 360 = 0x168
	float _rMargin;	// 364 = 0x16c
	float _bMargin;	// 368 = 0x170
	float _tMargin;	// 372 = 0x174
	NSMutableDictionary *_documentInfoDictionary;	// 376 = 0x178
	CGSize _viewSize;	// 380 = 0x17c
	int _viewScale;	// 388 = 0x184
	int _viewKind;	// 392 = 0x188
	NSMapTable *_cachedRTFFontTable;	// 396 = 0x18c
	float _hyphenationFactor;	// 400 = 0x190
	float _defaultTabInterval;	// 404 = 0x194
	UIColor *_documentBackgroundColor;	// 408 = 0x198
	NSRTFPriv _private;	// 412 = 0x19c
	BOOL _textBufferContentsIsFat;	// 2592 = 0xa20
	BOOL _explicitCharSetEncountered;	// 2593 = 0xa21
	BOOL _isRTLDocument;	// 2594 = 0xa22
	int _readLimit;	// 2596 = 0xa24
	int _thumbnailLimit;	// 2600 = 0xa28
	BOOL _limitReached;	// 2604 = 0xa2c
	unsigned char _textFlow;	// 2605 = 0xa2d
	NSMutableArray *_layoutOrientationSections;	// 2608 = 0xa30
	unsigned _verticalOrientationLocation;	// 2612 = 0xa34
	NSArray *_textBlocks;	// 2616 = 0xa38
	NSMutableArray *_nestedTables;	// 2620 = 0xa3c
	NSTextTable *_currentTable;	// 2624 = 0xa40
	NSTextTable *_previousTable;	// 2628 = 0xa44
	NSMutableArray *_currentRowArray;	// 2632 = 0xa48
	NSMutableArray *_previousRowArray;	// 2636 = 0xa4c
	int _currentRow;	// 2640 = 0xa50
	int _currentColumn;	// 2644 = 0xa54
	int _currentDefinitionColumn;	// 2648 = 0xa58
	BOOL _currentRowIsLast;	// 2652 = 0xa5c
	BOOL _setTableCells;	// 2653 = 0xa5d
	unsigned _currentBorderEdge;	// 2656 = 0xa60
	BOOL _currentBorderIsTable;	// 2660 = 0xa64
	NSMutableDictionary *_listDefinitions;	// 2664 = 0xa68
	int _currentListNumber;	// 2668 = 0xa6c
	int _currentListLevel;	// 2672 = 0xa70
	NSCalendar *_gregorianCalendar;	// 2676 = 0xa74
	NSMutableDictionary *_fontAttributesTable;	// 2680 = 0xa78
}
@property(assign) int baseWritingDirection;	// G=0x32568035; S=0x3256801d; converted property
@property(assign) int cocoaSubVersion;	// G=0x32567e71; S=0x32567ed5; converted property
@property(assign) int cocoaVersion;	// G=0x32567e59; S=0x32567e81; converted property
@property(assign) float defaultTabInterval;	// G=0x3256800d; S=0x32567ffd; converted property
@property(retain) id mutableAttributedString;	// G=0x3256968d; S=0x32569621; converted property
@property(assign) CGSize paperSize;	// G=0x32567df5; S=0x32567de1; converted property
@property(assign) unsigned textFlow;	// G=0x32568081; S=0x3256804d; converted property
@property(assign) CGSize viewSize;	// G=0x32567e21; S=0x32567e0d; converted property
- (id)initWithPath:(id)path;	// 0x32563149
- (id)initWithRTF:(id)rtf;	// 0x32563391
- (id)initWithRTFD:(id)rtfd;	// 0x32562fa5
- (id)initWithRTFDFileWrapper:(id)rtfdfileWrapper;	// 0x32563271
- (id)_RTFDFileWrapper;	// 0x32567db1
- (void)_addListDefinition:(id)definition forKey:(int)key;	// 0x3256a22d
- (void)_addOverride:(int)override forKey:(int)key;	// 0x3256a2dd
- (void)_beginTableRow;	// 0x32568335
- (void)_clearTableCells;	// 0x32568b29
- (unsigned)_currentBorderEdge;	// 0x325684d1
- (BOOL)_currentBorderIsTable;	// 0x325684e1
- (int)_currentListLevel;	// 0x3256a1fd
- (int)_currentListNumber;	// 0x3256a1dd
- (id)_currentTable;	// 0x32568465
- (id)_currentTableCell;	// 0x32568475
- (BOOL)_currentTableCellIsPlaceholder;	// 0x325684f1
- (id)_documentInfoDictionary;	// 0x32569de9
- (void)_endTableCell;	// 0x32568de9
- (void)_endTableCellDefinition;	// 0x32568d49
- (void)_endTableRow;	// 0x32568e89
- (void)_ensureTableCells;	// 0x32568091
- (void)_lastTableRow;	// 0x32568e75
- (id)_listDefinitions;	// 0x3256a21d
- (void)_mergeTableCellsHorizontally;	// 0x32568fd1
- (void)_mergeTableCellsVertically;	// 0x32569085
- (id)_mutableParagraphStyle;	// 0x325697d5
- (void)_paragraphInTable;	// 0x32568d99
- (void)_popState;	// 0x3256a911
- (void)_popTableState;	// 0x325687ad
- (void)_pushState;	// 0x3256a889
- (void)_pushTableState;	// 0x325685e5
- (void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x325685c5
- (void)_setCurrentListLevel:(int)level;	// 0x3256a20d
- (void)_setCurrentListNumber:(int)number;	// 0x3256a1ed
- (void)_setRTFDFileWrapper:(id)wrapper;	// 0x32567d6d
- (void)_setTableCells;	// 0x32568961
- (void)_setTableNestingLevel:(int)level;	// 0x32568b85
- (void)_startTableRowDefinition;	// 0x32568d39
- (void)_updateAttributes;	// 0x32569e39
- (id)attributedString;	// 0x32569975
- (id)attributedStringToEndOfGroup;	// 0x325698a1
- (id)attributesAtEndOfGroup;	// 0x32569c45
// converted property getter: - (int)baseWritingDirection;	// 0x32568035
// converted property getter: - (int)cocoaSubVersion;	// 0x32567e71
// converted property getter: - (int)cocoaVersion;	// 0x32567e59
- (void)dealloc;	// 0x3256aa25
- (id)defaultParagraphStyle;	// 0x325696f9
// converted property getter: - (float)defaultTabInterval;	// 0x3256800d
- (id)documentAttributes;	// 0x32569171
- (void)finalize;	// 0x3256ac19
- (float)floatCocoaVersion;	// 0x32567ee9
// converted property getter: - (id)mutableAttributedString;	// 0x3256968d
- (id)mutableAttributes;	// 0x3256969d
// converted property getter: - (CGSize)paperSize;	// 0x32567df5
- (void)processString:(id)string;	// 0x3256a3f9
- (void)setBackgroundColor:(id)color;	// 0x32567fb9
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x3256801d
- (void)setBottomMargin:(float)margin;	// 0x32567f99
// converted property setter: - (void)setCocoaSubVersion:(int)version;	// 0x32567ed5
// converted property setter: - (void)setCocoaVersion:(int)version;	// 0x32567e81
// converted property setter: - (void)setDefaultTabInterval:(float)interval;	// 0x32567ffd
- (void)setHyphenationFactor:(float)factor;	// 0x32567fa9
- (void)setLeftMargin:(float)margin;	// 0x32567f69
// converted property setter: - (void)setMutableAttributedString:(id)string;	// 0x32569621
// converted property setter: - (void)setPaperSize:(CGSize)size;	// 0x32567de1
- (void)setReadLimit:(int)limit;	// 0x32567dc1
- (void)setReadOnly:(int)only;	// 0x32567f49
- (void)setRightMargin:(float)margin;	// 0x32567f79
// converted property setter: - (void)setTextFlow:(unsigned)flow;	// 0x3256804d
- (void)setThumbnailLimit:(int)limit;	// 0x32567dd1
- (void)setTopMargin:(float)margin;	// 0x32567f89
- (void)setUsesScreenFonts:(int)fonts;	// 0x32567f59
- (void)setViewKind:(int)kind;	// 0x32567e39
- (void)setViewScale:(int)scale;	// 0x32567e49
// converted property setter: - (void)setViewSize:(CGSize)size;	// 0x32567e0d
// converted property getter: - (unsigned)textFlow;	// 0x32568081
// converted property getter: - (CGSize)viewSize;	// 0x32567e21
@end

