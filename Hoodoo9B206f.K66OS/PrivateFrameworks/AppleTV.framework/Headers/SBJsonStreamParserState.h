/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserState : NSObject {
}
+ (id)sharedInstance;	// 0x36900ef1
- (id)name;	// 0x36900f05
- (BOOL)needKey;	// 0x36900f01
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x36900ef5
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x36900efd
- (int)parserShouldReturn:(id)parser;	// 0x36900ef9
@end
