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
@property(retain, nonatomic) NSData *data;	// G=0x31dacd99; S=0x31d68f39; @synthesize=_data
+ (void)initialize;	// 0x31d68ed9
- (id)_initWithOtherImage:(id)otherImage;	// 0x31dacc81
- (void)_preheatBitmapData;	// 0x31dacbad
// declared property getter: - (id)data;	// 0x31dacd99
- (void)dealloc;	// 0x31d6bce9
// declared property setter: - (void)setData:(id)data;	// 0x31d68f39
@end

