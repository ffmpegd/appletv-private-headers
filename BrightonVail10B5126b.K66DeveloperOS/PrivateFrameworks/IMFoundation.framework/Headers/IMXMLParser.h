/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "NSXMLParserDelegate.h"
#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {
	NSXMLParser *_parser;	// 4 = 0x4
	IMXMLParserContext *_context;	// 8 = 0x8
	IMXMLParserFrame *_topFrame;	// 12 = 0xc
	NSMutableArray *_otherFrames;	// 16 = 0x10
	TidyDoc *_tidyDoc;	// 20 = 0x14
	CFDictionaryRef _framespace;	// 24 = 0x18
}
+ (id)sharedInstance;	// 0x341a392d
- (id)_newDataByTidyingData:(id)data;	// 0x341a3b25
- (void)_setupTidy;	// 0x341a39d9
- (void)_teardownTidy;	// 0x341a3b01
- (BOOL)parseContext:(id)context;	// 0x341a3c75
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x341967b5
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x3419640d
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x341965e9
- (void)parser:(id)parser foundIgnorableWhitespace:(id)whitespace;	// 0x341a4141
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x341a418d
@end
