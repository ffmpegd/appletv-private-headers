/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x52e5b1
- (id)name;	// 0x52e5ed
- (BOOL)needKey;	// 0x52e645
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x52e5f9
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x52e609
@end
