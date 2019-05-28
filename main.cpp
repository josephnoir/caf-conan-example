#include <caf/all.hpp>

void caf_main(caf::actor_system& system, const caf::actor_system_config& config) {
  system.spawn([](caf::event_based_actor* self) {
    aout(self) << "hello world" << std::endl;
  });
  system.await_all_actors_done();
}

CAF_MAIN()
