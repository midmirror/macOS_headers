//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IEDeviceDatabaseManager, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IEDeviceMediaCollection : NSObject
{
    IEDeviceDatabaseManager *parentDDM;
    NSArray *trackDatabase;
    NSArray *raw_playlistDatabase;
    NSArray *playlistDatabase;
    NSDictionary *mediaArtworkInfoDict;
    NSString *masterPlaylistTitle;
    BOOL is_iOS5;
}

@property(readonly) IEDeviceDatabaseManager *parentDDM; // @synthesize parentDDM;
@property(retain, nonatomic) NSDictionary *mediaArtworkInfoDict; // @synthesize mediaArtworkInfoDict;
@property(nonatomic) BOOL is_iOS5; // @synthesize is_iOS5;
@property(readonly) NSArray *playlistDatabase; // @synthesize playlistDatabase;
@property(retain, nonatomic) NSArray *trackDatabase; // @synthesize trackDatabase;
@property(retain, nonatomic) NSString *masterPlaylistTitle; // @synthesize masterPlaylistTitle;
- (void).cxx_destruct;
- (id)sortSmartPlaylistsFirst:(id)arg1;
- (id)playlistsWithoutHiddenPlaylists:(id)arg1;
- (void)setRawPlaylistDatabase:(id)arg1 overwrite:(BOOL)arg2 withCategoryPlaylists:(id)arg3;
- (id)initWithParentDeviceDatabaseManager:(id)arg1;

@end

