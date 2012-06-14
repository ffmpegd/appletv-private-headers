/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class NSMutableArray, WDListTable, OADBackground, WDFontTable, WDRevisionAuthorTable, WDText, NSDate, OADTheme, WDListDefinitionTable, WDStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDListTable *mListTable;	// 36 = 0x24
	NSMutableArray *mSections;	// 40 = 0x28
	unsigned short mDefaultTabWidth;	// 44 = 0x2c
	WDText *mImageBulletText;	// 48 = 0x30
	WDText *mFootnoteSeparator;	// 52 = 0x34
	WDText *mFootnoteContinuationSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationNotice;	// 60 = 0x3c
	WDText *mEndnoteSeparator;	// 64 = 0x40
	WDText *mEndnoteContinuationSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationNotice;	// 72 = 0x48
	int mFootnoteNumberFormat;	// 76 = 0x4c
	int mEndnoteNumberFormat;	// 80 = 0x50
	int mFootnotePosition;	// 84 = 0x54
	int mEndnotePosition;	// 88 = 0x58
	int mFootnoteRestart;	// 92 = 0x5c
	int mEndnoteRestart;	// 96 = 0x60
	unsigned short mFootnoteNumberingStart;	// 100 = 0x64
	int mGutterPosition;	// 104 = 0x68
	NSString *mOleFilename;	// 108 = 0x6c
	short mZoomPercentage;	// 112 = 0x70
	NSString *mVersion;	// 116 = 0x74
	unsigned mMirrorMargins : 1;	// 120 = 0x78
	unsigned mBorderSurroundHeader : 1;	// 120 = 0x78
	unsigned mBorderSurroundFooter : 1;	// 120 = 0x78
	unsigned mAutoHyphenate : 1;	// 120 = 0x78
	unsigned mEvenAndOddHeaders : 1;	// 120 = 0x78
	unsigned mGraphicsInHeaderFooter : 1;	// 120 = 0x78
	unsigned mBookFold : 1;	// 120 = 0x78
	unsigned mShowMarkup : 1;	// 120 = 0x78
	unsigned mShowComments : 1;	// 121 = 0x79
	unsigned mTrackChanges : 1;	// 121 = 0x79
	unsigned mShowRevisionMarksOnScreen : 1;	// 121 = 0x79
	unsigned mShowInsertionsAndDeletions : 1;	// 121 = 0x79
	unsigned mShowFormatting : 1;	// 121 = 0x79
	unsigned mShowOutline : 1;	// 121 = 0x79
	NSMutableArray *mDocumentImages;	// 124 = 0x7c
	NSMutableArray *mChangeTrackingEditDates;	// 128 = 0x80
	NSMutableArray *mChangeTrackingEditAuthors;	// 132 = 0x84
	NSDate *mCreationDate;	// 136 = 0x88
	NSMutableArray *mImageBullets;	// 140 = 0x8c
	int mZIndexTotalForMainText;	// 144 = 0x90
	int mZIndexTotalForHeaderFooterText;	// 148 = 0x94
	OADBackground *mDocumentBackground;	// 152 = 0x98
	OADTheme *mTheme;	// 156 = 0x9c
}
@property(assign) BOOL autoHyphenate;	// G=0x3136feb1; S=0x3120827d; converted property
@property(assign) BOOL bookFold;	// G=0x3136ff69; S=0x3120833d; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x3136fe59; S=0x3120824d; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x3136fe3d; S=0x3120822d; converted property
@property(retain) id creationDate;	// G=0x3137008d; S=0x31370615; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x31184c1d; S=0x3120826d; converted property
@property(retain) id documentBackground;	// G=0x313700ad; S=0x3121d6ad; converted property
@property(assign) int endnoteNumberFormat;	// G=0x3136fef9; S=0x312082ed; converted property
@property(assign) int endnotePosition;	// G=0x3136ff19; S=0x312082cd; converted property
@property(assign) int endnoteRestart;	// G=0x3136ff39; S=0x3120830d; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x3136fecd; S=0x3120829d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x3136fee9; S=0x312082dd; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x3136ff49; S=0x3120831d; converted property
@property(assign) int footnotePosition;	// G=0x3136ff09; S=0x312082bd; converted property
@property(assign) int footnoteRestart;	// G=0x3136ff29; S=0x312082fd; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x3136fe75; S=0x3136fe91; converted property
@property(assign) int gutterPosition;	// G=0x3136ff59; S=0x3120832d; converted property
@property(assign) BOOL mirrorMargins;	// G=0x3136fe21; S=0x31208211; converted property
@property(retain) id oleFilename;	// G=0x312a6b8d; S=0x31208519; converted property
@property(assign) BOOL showComments;	// G=0x3136ffc5; S=0x312081f5; converted property
@property(assign) BOOL showFormatting;	// G=0x31370035; S=0x312081b9; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x31370019; S=0x31208199; converted property
@property(assign) BOOL showMarkup;	// G=0x3136ffb1; S=0x312081d9; converted property
@property(assign) BOOL showOutline;	// G=0x31370051; S=0x3120836d; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x3136fffd; S=0x31208179; converted property
@property(assign) BOOL trackChanges;	// G=0x3136ffe1; S=0x31208159; converted property
@property(retain) id version;	// G=0x3136ffa1; S=0x313706e1; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x313700cd; S=0x3121d7d9; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x313700bd; S=0x3121d7b9; converted property
@property(assign) short zoomPercentage;	// G=0x3136ff85; S=0x3120835d; converted property
+ (int)thumbnailCutOff;	// 0x3136fe19
- (id)init;	// 0x311ff98d
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x312a1789
- (id)addImageBulletText;	// 0x3123e249
- (void)addImageBullets;	// 0x31370721
- (id)addList:(id)list;	// 0x3137084d
- (id)addListDefinition;	// 0x313708b5
- (void)addRevisionAuthor:(id)author;	// 0x31370655
- (id)addSection;	// 0x31214071
- (id)annotationBlockIterator;	// 0x31370151
- (id)annotationIterator;	// 0x313702dd
- (id)applicationName;	// 0x3136ff95
// converted property getter: - (BOOL)autoHyphenate;	// 0x3136feb1
// converted property getter: - (BOOL)bookFold;	// 0x3136ff69
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x3136fe59
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x3136fe3d
- (id)changeTrackingEditAuthors;	// 0x3137007d
- (id)changeTrackingEditDates;	// 0x3137006d
// converted property getter: - (id)creationDate;	// 0x3137008d
- (void)dealloc;	// 0x3118610d
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x31184c1d
// converted property getter: - (id)documentBackground;	// 0x313700ad
- (id)endnoteBlockIterator;	// 0x313701d5
- (id)endnoteContinuationNotice;	// 0x31219385
- (id)endnoteContinuationSeparator;	// 0x31219375
- (id)endnoteIterator;	// 0x31370361
// converted property getter: - (int)endnoteNumberFormat;	// 0x3136fef9
// converted property getter: - (int)endnotePosition;	// 0x3136ff19
// converted property getter: - (int)endnoteRestart;	// 0x3136ff39
- (id)endnoteSeparator;	// 0x31219365
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x3136fecd
- (id)fontTable;	// 0x312008bd
- (id)footnoteBlockIterator;	// 0x31370259
- (id)footnoteContinuationNotice;	// 0x31219355
- (id)footnoteContinuationSeparator;	// 0x31219345
- (id)footnoteIterator;	// 0x313703e5
// converted property getter: - (int)footnoteNumberFormat;	// 0x3136fee9
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x3136ff49
// converted property getter: - (int)footnotePosition;	// 0x3136ff09
// converted property getter: - (int)footnoteRestart;	// 0x3136ff29
- (id)footnoteSeparator;	// 0x31219221
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x3136fe75
// converted property getter: - (int)gutterPosition;	// 0x3136ff59
- (id)imageBulletParagraph;	// 0x312e17a5
- (id)imageBulletText;	// 0x3137009d
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x3123e405
- (id)imageBullets;	// 0x31211ae5
- (BOOL)isFromBinary;	// 0x313700dd
- (id)lastSection;	// 0x3127ac85
- (id)listAt:(int)at;	// 0x31370871
- (int)listCount;	// 0x31370895
- (id)listDefinitionAt:(int)at;	// 0x313708d5
- (int)listDefinitionCount;	// 0x313708f9
- (id)listDefinitionTable;	// 0x31211af5
- (id)listDefinitionWithId:(int)anId;	// 0x312743e1
- (id)listTable;	// 0x31184e31
- (id)mainBlocksIterator;	// 0x313704ed
- (id)mainRunsIterator;	// 0x31370469
// converted property getter: - (BOOL)mirrorMargins;	// 0x3136fe21
- (id)newAnnotationBlockIterator;	// 0x313700f5
- (id)newAnnotationIterator;	// 0x31370281
- (id)newEndnoteBlockIterator;	// 0x31370179
- (id)newEndnoteIterator;	// 0x31370305
- (id)newFootnoteBlockIterator;	// 0x313701fd
- (id)newFootnoteIterator;	// 0x31370389
- (id)newMainBlocksIterator;	// 0x31370491
- (id)newMainRunsIterator;	// 0x3137040d
- (id)newSectionIterator;	// 0x31370515
// converted property getter: - (id)oleFilename;	// 0x312a6b8d
- (void)removeEmptySections;	// 0x31370581
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x31370679
- (id)revisionAuthorAt:(int)at;	// 0x3137069d
- (int)revisionAuthorCount;	// 0x313706c1
- (id)revisionAuthorTable;	// 0x31212795
- (id)sectionAt:(int)at;	// 0x31183589
- (int)sectionCount;	// 0x31219f05
- (id)sectionIterator;	// 0x31370559
- (id)sections;	// 0x3121a00d
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x3120827d
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x3120833d
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x3120824d
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x3120822d
// converted property setter: - (void)setCreationDate:(id)date;	// 0x31370615
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x3120826d
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x3121d6ad
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x312082ed
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x312082cd
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x3120830d
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x3120829d
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x312082dd
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x3120831d
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x312082bd
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x312082fd
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x3136fe91
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x3120832d
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x31208211
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x31208519
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x312081f5
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x312081b9
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x31208199
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x312081d9
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x3120836d
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x31208179
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x31208159
// converted property setter: - (void)setVersion:(id)version;	// 0x313706e1
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x3121d7d9
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x3121d7b9
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x3120835d
// converted property getter: - (BOOL)showComments;	// 0x3136ffc5
// converted property getter: - (BOOL)showFormatting;	// 0x31370035
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x31370019
// converted property getter: - (BOOL)showMarkup;	// 0x3136ffb1
// converted property getter: - (BOOL)showOutline;	// 0x31370051
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x3136fffd
- (id)styleSheet;	// 0x31208ce9
- (id)theme;	// 0x3121ad01
// converted property getter: - (BOOL)trackChanges;	// 0x3136ffe1
// converted property getter: - (id)version;	// 0x3136ffa1
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x313700cd
// converted property getter: - (int)zIndexTotalForMainText;	// 0x313700bd
// converted property getter: - (short)zoomPercentage;	// 0x3136ff85
@end
