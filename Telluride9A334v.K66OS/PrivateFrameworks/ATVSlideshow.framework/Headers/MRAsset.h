/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MRAsset : NSObject {
	NSString *mPath;	// 4 = 0x4
}
@property(copy) NSString *path;	// G=0x32f463ad; S=0x32f463c1; @synthesize=mPath
+ (id)mrAssetWithPath:(id)path;	// 0x32f462e5
- (CGImageRef)CGImageForSize:(CGSize)size;	// 0x32f463a9
- (void)dealloc;	// 0x32f46345
// declared property getter: - (id)path;	// 0x32f463ad
// declared property setter: - (void)setPath:(id)path;	// 0x32f463c1
- (id)workingPath;	// 0x32f46389
- (id)workingPathForSize:(CGSize)size;	// 0x32f46399
@end

