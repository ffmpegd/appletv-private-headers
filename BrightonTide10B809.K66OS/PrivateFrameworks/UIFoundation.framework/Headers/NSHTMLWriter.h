/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSString, NSDictionary, NSAttributedString, NSData, NSMutableDictionary, NSFileWrapper, NSMutableString, NSMutableIndexSet, NSMutableOrderedSet, NSURL, NSMutableArray;

@interface NSHTMLWriter : NSObject {
	NSAttributedString *_attrStr;	// 4 = 0x4
	NSDictionary *_documentAttrs;	// 8 = 0x8
	NSData *_htmlData;	// 12 = 0xc
	NSMutableString *_bodyStr;	// 16 = 0x10
	NSFileWrapper *_fileWrapper;	// 20 = 0x14
	NSMutableDictionary *_subresources;	// 24 = 0x18
	NSData *_webArchiveData;	// 28 = 0x1c
	NSMutableArray *_paraStyleStrings;	// 32 = 0x20
	NSMutableArray *_paraStyleArrays;	// 36 = 0x24
	NSMutableIndexSet *_paraStyleIndexes;	// 40 = 0x28
	NSMutableIndexSet *_listItemStyleIndexes;	// 44 = 0x2c
	NSMutableOrderedSet *_charStyleStrings;	// 48 = 0x30
	NSMutableArray *_charStyleArrays;	// 52 = 0x34
	NSMutableArray *_fontStrings;	// 56 = 0x38
	NSMutableArray *_tableStyleStrings;	// 60 = 0x3c
	NSMutableArray *_tableCellStyleStrings;	// 64 = 0x40
	NSMutableArray *_blockStyleStrings;	// 68 = 0x44
	NSMutableArray *_olistStyleStrings;	// 72 = 0x48
	NSMutableArray *_ulistStyleStrings;	// 76 = 0x4c
	NSMutableDictionary *_fontNames;	// 80 = 0x50
	NSMutableDictionary *_fontDescriptions;	// 84 = 0x54
	int _level;	// 88 = 0x58
	int _prefixSpaces;	// 92 = 0x5c
	NSString *_textEncodingName;	// 96 = 0x60
	unsigned _characterEncoding;	// 100 = 0x64
	NSURL *_outputBaseURL;	// 104 = 0x68
	id _resourceHandler;	// 108 = 0x6c
	unsigned _excludedElements1;	// 112 = 0x70
	unsigned _excludedElements2;	// 116 = 0x74
	struct {
		unsigned isSoft : 1;
		unsigned reachedStart : 1;
		unsigned reachedEnd : 1;
		unsigned isIndexing : 1;
		unsigned isTesting : 1;
		unsigned hasTrailingNewline : 1;
		unsigned pad : 26;
	} _flags;	// 120 = 0x78
}
@property(readonly, retain) NSMutableDictionary *subresources;	// G=0x35af4db1; converted property
@property(readonly, retain) NSData *webArchiveData;	// G=0x35af5119; converted property
- (id)initWithAttributedString:(id)attributedString;	// 0x35aed5a9
- (id)HTMLData;	// 0x35af4d05
- (id)HTMLFileWrapper;	// 0x35af4d61
- (void)_appendAttachment:(id)attachment atIndex:(unsigned)index toString:(id)string;	// 0x35af1bf9
- (unsigned)_blockClassForBlock:(id)block;	// 0x35af0265
- (BOOL)_closeBlocksForParagraphStyle:(id)paragraphStyle atIndex:(unsigned)index inString:(id)string;	// 0x35af1391
- (void)_closeFlags:(unsigned)flags openFlags:(unsigned)flags2 inString:(id)string;	// 0x35aeffe5
- (BOOL)_closeListsForParagraphStyle:(id)paragraphStyle atIndex:(unsigned)index inString:(id)string;	// 0x35af1ab1
- (void)_createWebArchiveData;	// 0x35af50c9
- (id)_defaultValueForAttribute:(id)attribute range:(NSRange)range;	// 0x35aeec01
- (void)_generateHTML;	// 0x35af2391
- (BOOL)_isStrictByParsingExcludedElements;	// 0x35af1bfd
- (unsigned)_listClassForList:(id)list;	// 0x35af1661
- (void)_loadWebKit;	// 0x35aed545
- (void)_openBlocksForParagraphStyle:(id)paragraphStyle atIndex:(unsigned)index inString:(id)string;	// 0x35af0d71
- (void)_openListsForParagraphStyle:(id)paragraphStyle atIndex:(unsigned)index inString:(id)string isStrict:(BOOL)strict;	// 0x35af17f5
- (unsigned)_paragraphClassforParagraphStyle:(id)style range:(NSRange)range isEmpty:(BOOL)empty isCompletelyEmpty:(BOOL)empty4 headerString:(id *)string alignmentString:(id *)string6 directionString:(id *)string7;	// 0x35aeef61
- (id)_prefix;	// 0x35aed861
- (id)_prefixDown;	// 0x35aed931
- (id)_prefixUp;	// 0x35aed8c9
- (void)_prepareString:(id)string forConversionToEncoding:(unsigned)encoding;	// 0x35af2239
- (unsigned)_spanClassForAttributes:(id)attributes inParagraphClass:(unsigned)paragraphClass spanClass:(unsigned)aClass flags:(unsigned *)flags;	// 0x35aed9a1
- (Class)_webArchiveClass;	// 0x35aed549
- (id)_webKitBundle;	// 0x35aed4dd
- (void)_writeDocumentPropertiesToString:(id)string;	// 0x35aefc39
- (void)_writeDocumentProperty:(id)property value:(id)value toString:(id)string;	// 0x35aefba9
- (void)dealloc;	// 0x35aed615
- (id)documentFragmentForDocument:(id)document;	// 0x35af5499
- (void)readDocumentFragment:(id)fragment;	// 0x35af5221
- (void)setDocumentAttributes:(id)attributes;	// 0x35aed81d
// converted property getter: - (id)subresources;	// 0x35af4db1
- (id)webArchive;	// 0x35af4f45
// converted property getter: - (id)webArchiveData;	// 0x35af5119
@end
