//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ETTaskState : NSObject
{
    shared_ptr_d082c67d _networkPointer;
    unordered_map_74b681bc _blobs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_d082c67d networkPointer; // @synthesize networkPointer=_networkPointer;
@property unordered_map_74b681bc blobs; // @synthesize blobs=_blobs;
- (id)initWithNetwork:(shared_ptr_d082c67d)arg1;
- (id)initWithBlobMap:(unordered_map_74b681bc *)arg1;

@end

