/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface CDNDownloadData : XXUnknownSuperclass {
	NSString *name;	// 4 = 0x4
	unsigned cdnId;	// 8 = 0x8
	unsigned rank;	// 12 = 0xc
	unsigned rankBySpeed;	// 16 = 0x10
	unsigned rankByNormalizedSpeed;	// 20 = 0x14
	unsigned origIndexFromNCCP;	// 24 = 0x18
	unsigned sortedIndex;	// 28 = 0x1c
	unsigned long long bandwidth;	// 32 = 0x20
	unsigned rtt;	// 40 = 0x28
	unsigned numTotalDownloadables;	// 44 = 0x2c
	unsigned numSuccessfulDownloadables;	// 48 = 0x30
	unsigned numFailedDownloadables;	// 52 = 0x34
	NSMutableArray *downloadableData;	// 56 = 0x38
	NSMutableArray *timedTextData;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) unsigned long long bandwidth;	// G=0x5fcfd9; @synthesize
@property(readonly, assign, nonatomic) unsigned cdnId;	// G=0x5fcf59; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *downloadableData;	// G=0x5fd021; @synthesize
@property(readonly, assign, nonatomic) NSString *name;	// G=0x5fcf49; @synthesize
@property(readonly, assign, nonatomic) unsigned numFailedDownloadables;	// G=0x5fd011; @synthesize
@property(readonly, assign, nonatomic) unsigned numSuccessfulDownloadables;	// G=0x5fd001; @synthesize
@property(readonly, assign, nonatomic) unsigned numTotalDownloadables;	// G=0x5fcff1; @synthesize
@property(readonly, assign, nonatomic) unsigned origIndexFromNCCP;	// G=0x5fcfa9; @synthesize
@property(readonly, assign, nonatomic) unsigned rank;	// G=0x5fcf79; @synthesize
@property(readonly, assign, nonatomic) unsigned rankByNormalizedSpeed;	// G=0x5fcf99; @synthesize
@property(readonly, assign, nonatomic) unsigned rankBySpeed;	// G=0x5fcf89; @synthesize
@property(readonly, assign, nonatomic) unsigned rtt;	// G=0x5fcf69; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x5fcfb9; S=0x5fcfc9; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *timedTextData;	// G=0x5fd031; @synthesize
- (id)initWithCdn:(Cdn *)cdn;	// 0x5fc335
- (BOOL)allDownloadablesDownloaded;	// 0x5fcc01
// declared property getter: - (unsigned long long)bandwidth;	// 0x5fcfd9
// declared property getter: - (unsigned)cdnId;	// 0x5fcf59
- (int)compareByNormalizedSpeed:(id)speed;	// 0x5fce2d
- (int)compareByRank:(id)rank;	// 0x5fcd7d
- (int)compareBySpeed:(id)speed;	// 0x5fcdd5
- (void)computeNumDownloadables;	// 0x5fca59
- (void)dealloc;	// 0x5fc515
- (id)description;	// 0x5fce85
// declared property getter: - (id)downloadableData;	// 0x5fd021
- (id)getDownloadURL:(unsigned)url withContentProfile:(int)contentProfile bcp47:(id)a47;	// 0x5fc711
- (id)getRedirectedDownloadURL:(unsigned)url withContentProfile:(int)contentProfile bcp47:(id)a47;	// 0x5fc8ad
- (id)getTimedTextURL:(id)url closedCaptions:(BOOL)captions;	// 0x5fc5a5
// declared property getter: - (id)name;	// 0x5fcf49
// declared property getter: - (unsigned)numFailedDownloadables;	// 0x5fd011
// declared property getter: - (unsigned)numSuccessfulDownloadables;	// 0x5fd001
// declared property getter: - (unsigned)numTotalDownloadables;	// 0x5fcff1
// declared property getter: - (unsigned)origIndexFromNCCP;	// 0x5fcfa9
// declared property getter: - (unsigned)rank;	// 0x5fcf79
// declared property getter: - (unsigned)rankByNormalizedSpeed;	// 0x5fcf99
// declared property getter: - (unsigned)rankBySpeed;	// 0x5fcf89
// declared property getter: - (unsigned)rtt;	// 0x5fcf69
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x5fcfc9
// declared property getter: - (unsigned)sortedIndex;	// 0x5fcfb9
// declared property getter: - (id)timedTextData;	// 0x5fd031
@end

