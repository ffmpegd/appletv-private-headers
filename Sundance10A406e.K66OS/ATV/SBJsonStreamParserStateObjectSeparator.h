/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectSeparator : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x491331
- (id)name;	// 0x49136d
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x491379
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x491395
@end
