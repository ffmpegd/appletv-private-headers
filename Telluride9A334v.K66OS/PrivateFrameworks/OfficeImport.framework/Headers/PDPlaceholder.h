/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PDPlaceholder : NSObject {
@private
	int mType;	// 4 = 0x4
	int mOrientation;	// 8 = 0x8
	int mSize;	// 12 = 0xc
	int mIndex;	// 16 = 0x10
	int mBoundsTrack;	// 20 = 0x14
}
@property(assign) int boundsTrack;	// G=0x356fa7c1; S=0x356902c1; converted property
@property(assign) int index;	// G=0x35564d5d; S=0x355637c5; converted property
@property(assign) int orientation;	// G=0x356fa7b1; S=0x35563889; converted property
@property(assign) int size;	// G=0x35564d6d; S=0x35563861; converted property
@property(assign) int type;	// G=0x35564d4d; S=0x35563839; converted property
- (id)init;	// 0x35563719
// converted property getter: - (int)boundsTrack;	// 0x356fa7c1
// converted property getter: - (int)index;	// 0x35564d5d
// converted property getter: - (int)orientation;	// 0x356fa7b1
// converted property setter: - (void)setBoundsTrack:(int)track;	// 0x356902c1
// converted property setter: - (void)setIndex:(int)index;	// 0x355637c5
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x35563889
// converted property setter: - (void)setSize:(int)size;	// 0x35563861
// converted property setter: - (void)setType:(int)type;	// 0x35563839
// converted property getter: - (int)size;	// 0x35564d6d
// converted property getter: - (int)type;	// 0x35564d4d
@end

