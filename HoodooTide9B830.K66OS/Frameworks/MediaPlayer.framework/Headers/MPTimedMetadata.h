/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {
@private
	void *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *allMetadata;	// G=0x3463286d; 
@property(readonly, assign, nonatomic) NSString *key;	// G=0x346326ed; 
@property(readonly, assign, nonatomic) NSString *keyspace;	// G=0x34632719; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x34632819; 
@property(readonly, assign, nonatomic) id value;	// G=0x34632745; 
- (id)init;	// 0x346325ad
- (id)_initWithMetadataItem:(id)metadataItem;	// 0x346325f9
// declared property getter: - (id)allMetadata;	// 0x3463286d
- (void)dealloc;	// 0x34632681
// declared property getter: - (id)key;	// 0x346326ed
// declared property getter: - (id)keyspace;	// 0x34632719
// declared property getter: - (double)timestamp;	// 0x34632819
// declared property getter: - (id)value;	// 0x34632745
@end
