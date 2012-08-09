/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsMetadataView, MCProfile;

__attribute__((visibility("hidden")))
@interface SettingsProfileInspectorViewController : BRViewController {
	MCProfile *_profile;	// 100 = 0x64
	SettingsMetadataView *_infoView;	// 104 = 0x68
}
@property(retain, nonatomic) SettingsMetadataView *infoView;	// G=0xb3c41; S=0xb3c51; @synthesize=_infoView
@property(retain, nonatomic) MCProfile *profile;	// G=0xb3c09; S=0xb3c19; @synthesize=_profile
- (id)initWithProfile:(id)profile;	// 0xb34a9
- (void).cxx_destruct;	// 0xb3c79
- (void)_updateMetadata:(id)metadata;	// 0xb38a1
// declared property getter: - (id)infoView;	// 0xb3c41
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb37a1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb36bd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb36b9
// declared property getter: - (id)profile;	// 0xb3c09
// declared property setter: - (void)setInfoView:(id)view;	// 0xb3c51
// declared property setter: - (void)setProfile:(id)profile;	// 0xb3c19
@end
