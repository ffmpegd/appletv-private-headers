/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"
#import "AppleTV-Structs.h"

@class NSArray;

@interface ATVMusicCoversCollection : BRPhotoMediaCollection {
@private
	ATVDataClientRef _dataClient;	// 44 = 0x2c
	unsigned long _dataClientType;	// 48 = 0x30
	NSArray *_albums;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
}
@property(retain, nonatomic) NSArray *albums;	// G=0x32b34a31; S=0x32b347b5; @synthesize=_albums
@property(retain, nonatomic) NSArray *assets;	// G=0x32b34a41; S=0x32b34a51; @synthesize=_assets
@property(retain, nonatomic) ATVDataClientRef dataClient;	// G=0x32b346e1; S=0x32b349ed; @synthesize=_dataClient
@property(assign, nonatomic) unsigned long dataClientType;	// G=0x32b34a11; S=0x32b34a21; @synthesize=_dataClientType
- (id)initWithDataClient:(ATVDataClientRef)dataClient;	// 0x32b34635
// declared property getter: - (id)albums;	// 0x32b34a31
// declared property getter: - (id)assets;	// 0x32b34a41
- (id)collectionID;	// 0x32b347a5
- (ATVMediaQueryRef)createAlbumsQuery;	// 0x32b346f1
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x32b346e1
// declared property getter: - (unsigned long)dataClientType;	// 0x32b34a11
- (void)dealloc;	// 0x32b3469d
- (id)mediaAssets;	// 0x32b34819
- (id)mediaTypes;	// 0x32b349a9
- (id)photoAssets;	// 0x32b34809
// declared property setter: - (void)setAlbums:(id)albums;	// 0x32b347b5
// declared property setter: - (void)setAssets:(id)assets;	// 0x32b34a51
// declared property setter: - (void)setDataClient:(ATVDataClientRef)client;	// 0x32b349ed
// declared property setter: - (void)setDataClientType:(unsigned long)type;	// 0x32b34a21
- (id)title;	// 0x32b34765
@end
