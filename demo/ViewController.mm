//
//  ViewController.m
//  demo
//
//  Created by Cosmo Julis on 7/20/21.
//

#import "ViewController.h"
#include "user_quest_table.hpp"
#include "user_item_table.hpp"

using namespace co;
using namespace user;
using namespace quest_ns;
using namespace item_ns;

quest_table & uqt = quest_table::get_user_table();
item_table & uit = item_table::get_user_table();


@interface ViewController ()

@property (assign, nonatomic) bool meet;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    const quest & q = 
    uqt.quest_map[7] = q;
}

- (IBAction)requirementButtonDidTap:(id)sender {
    if (self.meet) return;
    for (const auto & [id, q] : uqt.quest_map) {
        if (q.is_meet()) {
            self.meet = true;
            std::cout << "quest meet\n";
            return;
        }
    }
}

- (IBAction)buttonDidTap:(id)sender {

}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    item i (std::rand()%3 + 5);
    item & ti = uit.item_map[i.get_id()];
    ti.increase_count(1);
    
    std::cout << "make item " << i.get_id() << std::endl;
    
    for (auto & [id, q] : uqt.quest_map) {
        if (i.is_related(q.get_id())) {
            if (q.is_meet()) {
                std::cout << "is meet\n";
                q.update(i.get_id());
            }
        }
    }


}

@end
