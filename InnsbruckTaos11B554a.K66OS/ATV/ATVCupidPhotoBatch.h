/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatch : XXUnknownSuperclass {
	NSString *_ID;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSDate *_modifiedDate;	// 12 = 0xc
	NSMutableArray *_photos;	// 16 = 0x10
	int _selectedIndex;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *ID;	// G=0xad995; S=0xad9a5; @synthesize=_ID
@property(retain, nonatomic) NSString *description;	// G=0xad9cd; S=0xad9dd; @synthesize=_description
@property(retain, nonatomic) NSDate *modifiedDate;	// G=0xada05; S=0xada15; @synthesize=_modifiedDate
@property(retain, nonatomic) NSMutableArray *photos;	// G=0xada3d; S=0xada4d; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0xada75; S=0xada85; @synthesize=_selectedIndex
- (void).cxx_destruct;	// 0xada95
// declared property getter: - (id)ID;	// 0xad995
// declared property getter: - (id)description;	// 0xad9cd
// declared property getter: - (id)modifiedDate;	// 0xada05
// declared property getter: - (id)photos;	// 0xada3d
// declared property getter: - (int)selectedIndex;	// 0xada75
// declared property setter: - (void)setDescription:(id)description;	// 0xad9dd
// declared property setter: - (void)setID:(id)anId;	// 0xad9a5
// declared property setter: - (void)setModifiedDate:(id)date;	// 0xada15
// declared property setter: - (void)setPhotos:(id)photos;	// 0xada4d
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0xada85
@end

