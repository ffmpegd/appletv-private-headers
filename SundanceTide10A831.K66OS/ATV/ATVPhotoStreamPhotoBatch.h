/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVPhotoStreamPhotoBatch : XXUnknownSuperclass {
	NSDate *_modifiedDate;	// 4 = 0x4
	NSString *_ID;	// 8 = 0x8
	NSMutableArray *_photos;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *ID;	// G=0x1086a9; S=0x1086b9; @synthesize=_ID
@property(retain, nonatomic) NSDate *modifiedDate;	// G=0x108689; S=0x108699; @synthesize=_modifiedDate
@property(retain, nonatomic) NSMutableArray *photos;	// G=0x1086c9; S=0x1086d9; @synthesize=_photos
// declared property getter: - (id)ID;	// 0x1086a9
- (void)dealloc;	// 0x108611
// declared property getter: - (id)modifiedDate;	// 0x108689
// declared property getter: - (id)photos;	// 0x1086c9
// declared property setter: - (void)setID:(id)anId;	// 0x1086b9
// declared property setter: - (void)setModifiedDate:(id)date;	// 0x108699
// declared property setter: - (void)setPhotos:(id)photos;	// 0x1086d9
@end

