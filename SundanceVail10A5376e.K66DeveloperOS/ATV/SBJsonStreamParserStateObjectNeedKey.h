/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectNeedKey : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x47c239
- (id)name;	// 0x47c275
- (BOOL)needKey;	// 0x47c2c9
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x47c281
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x47c28d
@end

