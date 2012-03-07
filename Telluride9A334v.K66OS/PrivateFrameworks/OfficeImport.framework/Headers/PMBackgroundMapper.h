/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class OADBackground;

__attribute__((visibility("hidden")))
@interface PMBackgroundMapper : CMMapper {
@private
	OADBackground *mBackground;	// 8 = 0x8
}
- (id)initWithOadBackground:(id)oadBackground parent:(id)parent;	// 0x3556b71d
- (void)mapAt:(id)at withState:(id)state;	// 0x3556b761
- (CGRect)slideRect;	// 0x3556ba35
@end

