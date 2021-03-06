/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CLNotifierServiceAdapter.h"
#import "CLCompassDatabaseProtocol.h"


__attribute__((visibility("hidden")))
@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol> {
}
+ (id)getSilo;	// 0x2d943375
- (id)initInSilo:(id)silo;	// 0x2d943501
- (void)beginService;	// 0x2d943551
- (void)endService;	// 0x2d9435ed
- (void)heartAttack;	// 0x2d9433e9
@end

