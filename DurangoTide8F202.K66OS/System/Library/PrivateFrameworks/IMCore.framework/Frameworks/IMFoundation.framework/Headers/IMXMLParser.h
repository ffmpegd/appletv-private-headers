/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "NSXMLParserDelegate.h"
#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSXMLParser, IMXMLParserFrame, IMXMLParserContext, NSMutableArray;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {
	NSXMLParser *_parser;	// 4 = 0x4
	IMXMLParserContext *_context;	// 8 = 0x8
	IMXMLParserFrame *_topFrame;	// 12 = 0xc
	NSMutableArray *_otherFrames;	// 16 = 0x10
	TidyDoc *_tidyDoc;	// 20 = 0x14
	CFDictionaryRef _framespace;	// 24 = 0x18
}
+ (id)sharedInstance;	// 0x31207939
- (id)_newDataByTidyingData:(id)data;	// 0x31206eb5
- (void)_setupTidy;	// 0x31206d11
- (void)_teardownTidy;	// 0x31206e95
- (id)autorelease;	// 0x3120692d
- (BOOL)parseContext:(id)context;	// 0x3120765d
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x31206ad9
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x312070fd
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x31206a65
- (void)parser:(id)parser foundIgnorableWhitespace:(id)whitespace;	// 0x312069f1
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x312069d1
- (oneway void)release;	// 0x31206921
- (unsigned)retainCount;	// 0x31206925
@end

