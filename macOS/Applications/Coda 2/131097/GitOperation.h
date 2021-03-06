//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMOperation.h"

@class GitRemote, GitRepository;

__attribute__((visibility("hidden")))
@interface GitOperation : SCMOperation
{
    GitRemote *iRemote;
}

@property(retain) GitRemote *remote; // @synthesize remote=iRemote;
- (void)launchTaskWithArguments:(id)arg1;
- (void)launchHelperScript:(id)arg1 withArguments:(id)arg2;
@property(readonly) GitRepository *repository;
- (void)dealloc;

@end

