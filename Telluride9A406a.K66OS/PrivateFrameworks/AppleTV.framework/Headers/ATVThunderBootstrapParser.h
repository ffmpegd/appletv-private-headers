/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderBootstrapParser : BRBaseParserDelegate {
@private
	NSMutableDictionary *_urlBag;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *urlBag;	// G=0x32fcee89; converted property
- (id)init;	// 0x32fced29
- (void)dealloc;	// 0x32fcee3d
- (void)populateURLForKey:(id)key attributes:(id)attributes;	// 0x32fcee99
- (void)startAddChoiceTeamWithAttributes:(id)attributes;	// 0x32fcef91
- (void)startGetChoiceTeamWithAttributes:(id)attributes;	// 0x32fcef71
- (void)startStreamWithAttributes:(id)attributes;	// 0x32fcef51
- (void)startUserAuthenticationWithAttributes:(id)attributes;	// 0x32fceef1
- (void)startUserAuthorizationWithAttributes:(id)attributes;	// 0x32fcef11
- (void)startUserLocationWithAttributes:(id)attributes;	// 0x32fcef31
// converted property getter: - (id)urlBag;	// 0x32fcee89
@end
