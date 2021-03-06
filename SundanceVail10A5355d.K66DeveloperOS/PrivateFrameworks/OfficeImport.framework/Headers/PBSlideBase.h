/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBSlideBase : NSObject {
}
+ (void)initTransitionMap:(id)map;	// 0x31dfdabd
+ (id)createOptions:(long)options transType:(int)type;	// 0x31d0eea9
+ (unsigned char)mapDirection:(id)direction;	// 0x31dfdeb5
+ (void)mapSlideNumberPlaceholder:(id)placeholder tgtSlideBase:(id)base state:(id)state;	// 0x31bf5b45
+ (void)parseSlideShowInfo:(PptSSSlideInfoAtom *)info slideBase:(id)base state:(id)state;	// 0x31d0ec65
+ (int)parseTransType:(int)type direction:(long)direction;	// 0x31d0edfd
+ (void)readColorScheme:(id)scheme colorScheme:(id)scheme2 colorMap:(id)map state:(id)state;	// 0x31ba3475
+ (void)readDrawingGroup:(id)group slide:(id)slide state:(id)state;	// 0x31ba3a61
+ (BOOL)slideFollowsMasterBackground:(id)background;	// 0x31bf2e91
+ (void)writeSlideShowInfo:(id)info slideBase:(id)base state:(id)state;	// 0x31dfd785
@end

