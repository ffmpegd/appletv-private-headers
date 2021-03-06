/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBSlideBase : NSObject {
}
+ (void)initTransitionMap:(id)map;	// 0x30dff365
+ (id)createOptions:(long)options transType:(int)type;	// 0x30d2b7b5
+ (unsigned char)mapDirection:(id)direction;	// 0x30dff6f1
+ (void)mapSlideNumberPlaceholder:(id)placeholder tgtSlideBase:(id)base state:(id)state;	// 0x30ca6b11
+ (void)parseSlideShowInfo:(PptSSSlideInfoAtom *)info slideBase:(id)base state:(id)state;	// 0x30d2b51d
+ (int)parseTransType:(int)type direction:(long)direction;	// 0x30d2b709
+ (void)readColorScheme:(id)scheme colorScheme:(id)scheme2 colorMap:(id)map state:(id)state;	// 0x30ca30e1
+ (void)readDrawingGroup:(id)group slide:(id)slide state:(id)state;	// 0x30beb56d
+ (BOOL)slideFollowsMasterBackground:(id)background;	// 0x30c6baa9
+ (void)writeSlideShowInfo:(id)info slideBase:(id)base state:(id)state;	// 0x30dff999
@end

