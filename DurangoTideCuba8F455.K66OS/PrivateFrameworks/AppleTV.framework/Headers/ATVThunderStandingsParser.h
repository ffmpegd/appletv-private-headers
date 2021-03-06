/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVThunderXMLParser.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsParser : NSObject <ATVThunderXMLParser> {
@private
	NSMutableArray *_eastStandings;	// 4 = 0x4
	NSMutableArray *_westStandings;	// 8 = 0x8
	NSMutableArray *_currentConfStandings;	// 12 = 0xc
}
- (id)init;	// 0x306d9a05
- (id)createStorePage;	// 0x306d9a91
- (id)createStorePageForError:(int)error;	// 0x306da3e1
- (void)dealloc;	// 0x306d99a9
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x306d96bd
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x306d9771
@end

