/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDFill : NSObject <NSCopying> {
@private
	EDResources *mResources;	// 4 = 0x4
}
+ (id)fillWithResources:(id)resources;	// 0x355c0e79
- (id)initWithResources:(id)resources;	// 0x355c0f05
- (id)copyWithZone:(NSZone *)zone;	// 0x3572ed59
- (bool)isEmpty;	// 0x3572ed55
@end

