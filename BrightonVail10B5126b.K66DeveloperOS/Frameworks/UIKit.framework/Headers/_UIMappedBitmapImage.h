/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage {
	NSData *_data;	// 36 = 0x24
}
@property(retain, nonatomic) NSData *data;	// G=0x32cbcf21; S=0x32c79029; @synthesize=_data
+ (void)initialize;	// 0x32c78fc9
- (id)_initWithOtherImage:(id)otherImage;	// 0x32cbce09
- (void)_preheatBitmapData;	// 0x32cbcd35
// declared property getter: - (id)data;	// 0x32cbcf21
- (void)dealloc;	// 0x32c7bdd9
// declared property setter: - (void)setData:(id)data;	// 0x32c79029
@end
