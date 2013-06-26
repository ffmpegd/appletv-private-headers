/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPCollection.h"

@class NSString;

@interface SAMPPodcastCollection : SAMPCollection {
}
@property(copy, nonatomic) NSString *artist;	// G=0x303d8345; S=0x303d8361; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x303d83b1; S=0x303d83cd; 
+ (id)podcastCollection;	// 0x303d82b5
+ (id)podcastCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x303d82f9
// declared property getter: - (id)artist;	// 0x303d8345
- (id)encodedClassName;	// 0x303d82a9
- (id)groupIdentifier;	// 0x303d8299
// declared property setter: - (void)setArtist:(id)artist;	// 0x303d8361
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x303d83cd
// declared property getter: - (id)sortArtist;	// 0x303d83b1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x303d841d
@end
