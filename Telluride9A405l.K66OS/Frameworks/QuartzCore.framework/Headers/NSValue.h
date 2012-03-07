/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSValue.h> // Unknown library


@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(CATransform3D)catransform3D;	// 0x312e780d
- (CATransform3D)CATransform3DValue;	// 0x312e818d
@end

@interface NSValue (CAPoint3DAdditions)
+ (id)valueWithCAPoint3D:(CAPoint3D)capoint3D;	// 0x312e9535
- (CAPoint3D)CAPoint3DValue;	// 0x312e9519
@end

@interface NSValue (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x312c6a5d
@end

@interface NSValue (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x3134e0b1
- (float)CA_distanceToValue:(id)value;	// 0x3134dffd
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x312e6d59
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x3134e279
@end

