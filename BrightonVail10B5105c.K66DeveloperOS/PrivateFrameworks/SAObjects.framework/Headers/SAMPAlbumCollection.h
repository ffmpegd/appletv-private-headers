/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPCollection.h"


@interface SAMPAlbumCollection : SAMPCollection {
}
@property(assign, nonatomic) int rating;	// G=0x303a2079; S=0x303a20e9; 
+ (id)albumCollection;	// 0x303a1fe9
+ (id)albumCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x303a202d
- (id)encodedClassName;	// 0x303a1fdd
- (id)groupIdentifier;	// 0x303a1fcd
// declared property getter: - (int)rating;	// 0x303a2079
// declared property setter: - (void)setRating:(int)rating;	// 0x303a20e9
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x303a212d
@end

